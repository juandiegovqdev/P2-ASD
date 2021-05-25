using namespace std;

#include <iostream>
#include <iomanip>
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//------------------------------------------------------------------
// project def and includes

#define  N_REPETITIONS 1
// repeat several times each test to extract the minimum time
// and to have the caches filled

#define  MAX_RANGE (16)
#define  MIN_RANGE (4)
//big numbers to have a mean time (but not vey big to avoid cache misses) 

#define  T_MAX (100)
#define  T_MIN (0)

#define  N_ITERATIONS (3)

typedef double  ElementType;

ElementType temp_matrix[MAX_RANGE][MAX_RANGE];

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// matrixes and vectors  init
void matrix_vector_init(int current_range) {
	for (int row = 0; row < current_range; row++) {
		for (int col = 0; col < current_range; col++) {
			temp_matrix[row][col] = 0; // @ rand() / RAND_MAX * T_MAX;
		}
	}
	for (int row = 0; row < current_range; row++) {
		temp_matrix[row][0] = T_MAX;
		temp_matrix[row][current_range - 1] = T_MIN;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// pointers must be aligned to frontier of 16 (or 32) bytes
void  par_fourier(ElementType temp[MAX_RANGE][MAX_RANGE], int current_range, int n_iter) {
	int row, col, iter;


	//@  STUDENTS MUST WRITE HERE THE PARALLEL VERSION 
	//@  STUDENTS MUST WRITE HERE THE PARALLEL VERSION 
	//@  STUDENTS MUST WRITE HERE THE PARALLEL VERSION 

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void seq_fourier(ElementType temp[MAX_RANGE][MAX_RANGE], int current_range, int n_iter) {
	int row, col, iter;
	for (iter = 0; iter < n_iter; iter++) {
		for (row = 0; row < current_range; row++) {
			for (col = 1; col < current_range - 1; col++) {
				temp[row][col] = 0.5 * (temp[row][col - 1] + temp[row][col + 1]);
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
int main(int argc, char** argv) {

	double par_initial_time, par_elapsed_time, par_minimum_time = 1e+36;
	double seq_initial_time, seq_elapsed_time, seq_minimum_time = 1e+36;

	for (int range = MIN_RANGE; range <= MAX_RANGE; range = range * 2) {
		// measuring tests
		par_minimum_time = 1e+36;
		seq_minimum_time = 1e+36;

		// FIRST EXECUTING THE SEQUENTIAL VERSION TO GET THE CORRECT RESULTS AND THE SEQ TIMING 
		//------------------------------------------------
		for (int i = 0; i < N_REPETITIONS; i++) {
			matrix_vector_init(range);

			seq_initial_time = omp_get_wtime();
			// omp_get_wtime returns a value in seconds of the time elapsed from some point.
			// the problem is that the frequency is usually variable in current CPUs
			//------------------------------------------------

			seq_fourier(temp_matrix, range, N_ITERATIONS); // Do the test

			 //------------------------------------------------
			seq_elapsed_time = omp_get_wtime() - seq_initial_time;
			if ((seq_elapsed_time) < seq_minimum_time)    seq_minimum_time = seq_elapsed_time;
		}

		// looking at two rows to get a single value:
		double seq_value = accumulative_diff_2rows(temp_matrix, range);


		// SECOND EXECUTING THE PARALLEL VERSION AND ITS PAR TIMING 
		//------------------------------------------------
		for (int i = 0; i < N_REPETITIONS; i++) {
			matrix_vector_init(range);

			par_initial_time = omp_get_wtime();
			// omp_get_wtime returns a value in seconds of the time elapsed from some point.
			// the problem is that the frequency is usually variable in current CPUs
			//------------------------------------------------

			par_fourier(temp_matrix, range, N_ITERATIONS); // Do the test

			//------------------------------------------------
			par_elapsed_time = omp_get_wtime() - par_initial_time;
			if ((par_elapsed_time) < par_minimum_time)    par_minimum_time = par_elapsed_time;

		}

		// looking at two rows to get a single value:
		double par_value = accumulative_diff_2rows(temp_matrix, range);

		printf("- Size: %d . SEQ Minimum seconds: %.6lf\n", range, seq_minimum_time);
		printf("- Size: %d . PAR Minimum seconds: %.6lf\n", range, par_minimum_time);
		printf("- Total quadratic difference between the SEQ and PAR version: %.12lf\n",
			sqrt((seq_value - par_value) * (seq_value - par_value)));

	} //end of  'range' loop
}
