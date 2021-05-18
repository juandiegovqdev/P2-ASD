using namespace std;

#include <iostream>
#include <iomanip>
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <mpi.h>

//------------------------------------------------------------------
// project def and includes

// If the constant DEBUG_PRINT is defined you can do some  debugging by printing many steps and values below
// comment this line to do the final timing measures (and no printing is done): 
#define  DEBUG_PRINT
#ifdef DEBUG_PRINT
int debug_step = 0;
#endif

#define  N_REPETITIONS 1
// repeat several times each test to extract the minimum time
// and to have the caches filled

#define  MAX_RANGE (32)
#define  MIN_RANGE (16)
//big numbers to have a mean time (but not vey big to avoid cache misses) 

#define  T_MAX (100)
#define  T_MIN (0)

#define  N_ITERATIONS (3)

typedef double  ElementType;

/* this matrix is used in SEQ and PAR version. 
In the PAR version, only the master process need this matrix, but , being declared as global, all the 
processes (including the slaves) would occupy these bytes 
*/

ElementType temp_matrix[MAX_RANGE][MAX_RANGE];

// This is a pointer to dinamically allocate memory for each slave:
ElementType (* temp_matrix_partial)[MAX_RANGE] ;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// matrixes and vectors  init
void matrix_vector_init(int current_range) {
	for (int row = 0; row < current_range; row++) {
		for (int col = 0; col < current_range; col++) {
			temp_matrix[row][col] = 0; // @ rand() / RAND_MAX * T_MAX;
		}
	}
	for (int row= 0; row< current_range; row++) {
		temp_matrix[row][0] = T_MAX; 
		temp_matrix[row][current_range - 1] = T_MIN;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// pointers must be aligned to frontier of 16 (or 32) bytes
void  par_fourier(ElementType temp[MAX_RANGE][MAX_RANGE], int current_range, int n_iter) {
		int row, col, iter;


#ifdef DEBUG_PRINT
		printf("       Step: %3d . Entering par_fourier: current_range: %d  . n_iter: %d \n", debug_step++, current_range, n_iter);
#endif


		//@  STUDENTS MUST WRITE HERE THE PARALLEL VERSION 
		//@  STUDENTS MUST WRITE HERE THE PARALLEL VERSION 
		//@  STUDENTS MUST WRITE HERE THE PARALLEL VERSION 



}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void seq_fourier(ElementType temp[MAX_RANGE][MAX_RANGE], int current_range, int n_iter) {
	int row, col, iter;
	for (iter = 0; iter <n_iter; iter++) {
		for (row = 0; row < current_range ; row++) {
			for (col = 1; col < current_range - 1; col++) {
				temp[row][col] = 0.5*(temp[row ][col - 1] + temp[row ][col + 1]);
			}
		}
	}

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
ElementType  accumulative_diff_2rows(ElementType temp[MAX_RANGE][MAX_RANGE], int current_range) {
	int row;
	ElementType acum = 0.0;
	for (row = 0; row < current_range; row++) {
		acum += (T_MAX - temp[row][1]);
		acum += (temp[row][current_range - 2] - T_MIN);
	}
	return acum;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv) {

	double par_initial_time, par_elapsed_time, par_minimum_time = 1e+36;
	double seq_initial_time, seq_elapsed_time, seq_minimum_time = 1e+36;

	int range, i , p, my_rank,  n_bar;

	double par_value ;
	double seq_value ;

	MPI_Init(&argc, &argv);
	// THis is needed here to do the malloc (dinamically allocate memory for each slave) and to execute the SEQ version only in master process
	MPI_Comm_size(MPI_COMM_WORLD, &p);
	MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

	for (int range = MIN_RANGE; range <= MAX_RANGE; range = range * 2) {
		// measuring tests
		par_minimum_time = 1e+36;
		seq_minimum_time = 1e+36;

	if(my_rank==0) {
		// FIRST EXECUTING THE SEQUENTIAL VERSION TO GET THE CORRECT RESULTS AND THE SEQ TIMING 
		//------------------------------------------------
		for (int i = 0; i<N_REPETITIONS; i++) {
			matrix_vector_init(range);

			seq_initial_time = MPI_Wtime(); 
			//------------------------------------------------

			seq_fourier(temp_matrix, range, N_ITERATIONS); // Do the test

			 //------------------------------------------------
			seq_elapsed_time = MPI_Wtime()- seq_initial_time; 
			if ((seq_elapsed_time) < seq_minimum_time)    seq_minimum_time = seq_elapsed_time;
		}
#ifdef DEBUG_PRINT
		printf("       Step: %3d .SEQ version Finished. \n", debug_step++ );
#endif

		// looking at two rows to get a single value:
		 seq_value = accumulative_diff_2rows(temp_matrix, range);
	} //end of if(my_rank==0) {


		// SECOND EXECUTING THE PARALLEL VERSION AND ITS PAR TIMING 
		//------------------------------------------------
		//malloc:  dinamically allocate memory for each slave:
		n_bar = range / p;
		temp_matrix_partial = (ElementType (*)[MAX_RANGE] ) malloc (n_bar * MAX_RANGE * sizeof(ElementType)); 

		for (int i = 0; i<N_REPETITIONS; i++)
		{
			if(my_rank==0)  {
				matrix_vector_init(range);
				par_initial_time = MPI_Wtime();
				}
			MPI_Barrier(MPI_COMM_WORLD);

#ifdef DEBUG_PRINT
			printf("       Step: %3d . Calling to par_fourier. \n", debug_step++);
#endif

			par_fourier(temp_matrix, range, N_ITERATIONS); // Do the test
			
#ifdef DEBUG_PRINT
			printf("       Step: %3d . Finished par_fourier. \n", debug_step++);
#endif
			//------------------------------------------------
			MPI_Barrier(MPI_COMM_WORLD);
			if(my_rank==0) {
				par_elapsed_time = MPI_Wtime()- par_initial_time; 
				if ( (par_elapsed_time) < par_minimum_time)    par_minimum_time = par_elapsed_time;
				}	

		}

		if(my_rank==0)  {
			// looking at two rows to get a single value:
			 par_value = accumulative_diff_2rows(temp_matrix, range);

			printf("- Size: %d . SEQ Minimum seconds: %.6lf\n", range, seq_minimum_time);
			printf("- Size: %d . PAR Minimum seconds: %.6lf\n", range, par_minimum_time);
			printf("- Total quadratic difference between the SEQ and PAR version: %.12lf\n",
			sqrt((seq_value - par_value)*(seq_value - par_value)));
	}
	free(temp_matrix_partial);

	} //end of  'range' loop

	MPI_Finalize();
}
