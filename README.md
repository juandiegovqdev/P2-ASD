# P2-ASD

## Obtener métricas del código (sin paralelizar)-----------------------------------------------------------------------
1) Dependiendo del rango de n
    MAX_RANGE (160), MIN_RANGE (40): 
    N = 3
    - Enrique:
	size 40: 0.000031
	size 80: 0.000170
	size 160: 0.001078
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 40: 0.001949
	size 80: 0.018112
	size 160: 0.072790
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 40: 0.014082
	size 80: 0.124657
	size 160: 0.432191
    - Juan Diego:
    - Máquina Virtual:

    MAX_RANGE (1600), MIN_RANGE (400): 
    N = 3
    - Enrique:
	size 400: 0.002715
	size 800: 0.015679
	size 1600: 0.152767
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 400: 0.288545
	size 800: 1.161845
	size 1600: 11.717634
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 400: 2.974683
	size 800: 10.799040
	size 1600: 48.659716
    - Juan Diego:
    - Máquina Virtual:
    
    
2) Dependiendo del número de hilos
    2 HILOS
    MAX_RANGE (160), MIN_RANGE (40): 
    N = 3
    - Enrique:
	size 40: 0.000016
	size 80: 0.000084
	size 160: 0.000389
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 40: 0.001539
	size 80: 0.008838
	size 160: 0.041619
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 40: 0.013879
	size 80: 0.089753
	size 160: 0.385275
    - Juan Diego:
    - Máquina Virtual:
    MAX_RANGE (1600), MIN_RANGE (400): 
    N = 3
    - Enrique:
	size 400: 0.002989
	size 800: 0.012186
	size 1600: 0.149648
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 400: 0.296799
	size 800: 1.186982
	size 1600: 11.351887
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 400: 2.825698
	size 800: 10.461011
	size 1600: 49.351737
    - Juan Diego:
    - Máquina Virtual:

    4 HILOS
    MAX_RANGE (160), MIN_RANGE (40): 
    N = 3
    - Enrique:
	size 40: 0.000043
	size 80: 0.000126
	size 160: 0.000531
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 40: 0.001502
	size 80: 0.010678
	size 160: 0.049109
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 40: 0.040439
	size 80: 0.126850
	size 160: 0.447439
    - Juan Diego:
    - Máquina Virtual:
    MAX_RANGE (1600), MIN_RANGE (400): 
    N = 3
    - Enrique:
	size 400: 0.002651
	size 800: 0.012829
	size 1600: 0.153547
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 400: 0.304147
	size 800: 1.160076
	size 1600: 11.824286
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 400: 2.798703
	size 800: 10.625405
	size 1600: 49.249534
    - Juan Diego:
    - Máquina Virtual:


    8 HILOS
    MAX_RANGE (160), MIN_RANGE (40): 
    N = 3
    - Enrique:
	size 40: 0.000031
	size 80: 0.000170
	size 160: 0.001078
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 40: 0.001949
	size 80: 0.018112
	size 160: 0.072790
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 40: 0.014082
	size 80: 0.124657
	size 160: 0.432191
    - Juan Diego:
    - Máquina Virtual:

    MAX_RANGE (1600), MIN_RANGE (400): 
    N = 3
    - Enrique:
	size 400: 0.002715
	size 800: 0.015679
	size 1600: 0.152767
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 400: 0.288545
	size 800: 1.161845
	size 1600: 11.717634
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 400: 2.974683
	size 800: 10.799040
	size 1600: 48.659716
    - Juan Diego:
    - Máquina Virtual:
    

3) Unicast vs multicast
    - Enrique:
    - Juan Diego:
    - Máquina Virtual:



## Obtener métricas del código paralelizado (OpenMP)-----------------------------------------------------------------
1) Dependiendo del rango de n
    MAX_RANGE (160), MIN_RANGE (40): 
    N = 3
    - Enrique:
	size 40: 0.006804
	size 80: 0.000095
	size 160: 0.000795
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 40: 0.007961
	size 80: 0.004365
	size 160: 0.020047
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 40: 0.012038
	size 80: 0.035083
	size 160: 0.125885
    - Juan Diego:
    - Máquina Virtual:

    MAX_RANGE (1600), MIN_RANGE (400): 
    N = 3
    - Enrique:
	size 400: 0.006471
	size 800: 0.005379
	size 1600: 0.059967
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 400: 0.087388
	size 800: 0.307464
	size 1600: 1.768877
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 400: 0.369318
	size 800: 1.516041
	size 1600: 8.518737
    - Juan Diego:
    - Máquina Virtual:

2) Dependiendo del número de hilos
    2 HILOS
    MAX_RANGE (160), MIN_RANGE (40): 
    N = 3
    - Enrique:
	size 40: 0.001097
	size 80: 0.000063
	size 160: 0.000300
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 40: 0.002184
	size 80: 0.005183
	size 160: 0.020388
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 40: 0.010837
	size 80: 0.053833
	size 160: 0.210118
    - Juan Diego:
    - Máquina Virtual:
    MAX_RANGE (1600), MIN_RANGE (400): 
    N = 3
    - Enrique:
	size 400: 0.004134
	size 800: 0.008826
	size 1600: 0.090200
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 400: 0.145406
	size 800: 0.627501
	size 1600: 5.747902
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 400: 1.260593
	size 800: 6.012179
	size 1600: 26.448984
    - Juan Diego:
    - Máquina Virtual:

    4 HILOS
    MAX_RANGE (160), MIN_RANGE (40): 
    N = 3
    - Enrique:
	size 40: 0.004092
	size 80: 0.000095
	size 160: 0.000338
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 40: 0.003457
	size 80: 0.003104
	size 160:  0.014274
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 40: 0.023798
	size 80: 0.032381
	size 160: 0.126222
    - Juan Diego:
    - Máquina Virtual:
    MAX_RANGE (1600), MIN_RANGE (400): 
    N = 3
    - Enrique:
	size 400: 0.003910
	size 800: 0.004656
	size 1600: 0.056367
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 400: 0.075456
	size 800: 0.382779
	size 1600: 3.080171
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 400: 0.666005
	size 800: 2.762068
	size 1600: 14.145464
    - Juan Diego:
    - Máquina Virtual:

    8 HILOS
    MAX_RANGE (160), MIN_RANGE (40): 
    N = 3
    - Enrique:
	size 40: 0.006804
	size 80: 0.000095
	size 160: 0.000795
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 40: 0.007961
	size 80: 0.004365
	size 160: 0.020047
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 40: 0.012038
	size 80: 0.035083
	size 160: 0.125885
    - Juan Diego:
    - Máquina Virtual:

    MAX_RANGE (1600), MIN_RANGE (400): 
    N = 3
    - Enrique:
	size 400: 0.006471
	size 800: 0.005379
	size 1600: 0.059967
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 400: 0.087388
	size 800: 0.307464
	size 1600: 1.768877
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 400: 0.369318
	size 800: 1.516041
	size 1600: 8.518737
    - Juan Diego:
    - Máquina Virtual:


3) Unicast vs multicast
    - Enrique:
    - Juan Diego:
    - Máquina Virtual:



## Obtener métricas del código paralelizado (MPI)--------------------------------------------------------------------------------------------------
1) Dependiendo del rango de n
    MAX_RANGE (160), MIN_RANGE (40): 
    N = 3
    - Enrique:
	size 40: 0.000015
	size 80: 0.000095
	size 160: 0.000504
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 40: 0.001717
	size 80: 0.019088
	size 160: 0.124049
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 40: 0.015716
	size 80: 0.093632
	size 160: 0.414651
    - Juan Diego:
    - Máquina Virtual:

    MAX_RANGE (1600), MIN_RANGE (400): 
    N = 3
    - Enrique:
	size 400: 0.003250
	size 800: 0.014400
	size 1600: 0.138756
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 400: 0.307091
	size 800: 1.193676
	size 1600: 11.267166
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 400: 2.663448
	size 800: 11.752147
	size 1600: 51.921980
    - Juan Diego:
    - Máquina Virtual:


2) Dependiendo del número de hilos
    2 HILOS
    MAX_RANGE (160), MIN_RANGE (40): 
    N = 3
    - Enrique:
	size 40: 0.000036
	size 80: 0.000235
	size 160: 0.001058
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 40: 0.001624
	size 80: 0.009867
	size 160: 0.045831
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 40: 0.038749
	size 80: 0.100174
	size 160: 0.411752
    - Juan Diego:
    - Máquina Virtual:
    MAX_RANGE (1600), MIN_RANGE (400): 
    N = 3
    - Enrique:
	size 400: 0.003126
	size 800: 0.013783
	size 1600: 0.138608
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 400: 0.295421
	size 800: 1.457881
	size 1600: 11.371205
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 400: 2.642362
	size 800: 11.423369
	size 1600: 51.472836
    - Juan Diego:
    - Máquina Virtual:

    4 HILOS
    MAX_RANGE (160), MIN_RANGE (40): 
    N = 3
    - Enrique:
	size 40: 0.000015
	size 80: 0.000095
	size 160: 0.000504
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 40: 0.001717
	size 80: 0.019088
	size 160: 0.124049
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 40: 0.015716
	size 80: 0.093632
	size 160: 0.414651
    - Juan Diego:
    - Máquina Virtual:

    MAX_RANGE (1600), MIN_RANGE (400): 
    N = 3
    - Enrique:
	size 400: 0.003250
	size 800: 0.014400
	size 1600: 0.138756
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 400: 0.307091
	size 800: 1.193676
	size 1600: 11.267166
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 400: 2.663448
	size 800: 11.752147
	size 1600: 51.921980
    - Juan Diego:
    - Máquina Virtual:

    8 HILOS
    MAX_RANGE (160), MIN_RANGE (40): 
    N = 3
    - Enrique:
	size 40: 0.000061
	size 80: 0.000215
	size 160: 0.000866
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 40: 0.001770
	size 80: 0.009770
	size 160: 0.045436
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 40: 0.022323
	size 80: 0.091128
	size 160: 0.423895
    - Juan Diego:
    - Máquina Virtual:
    MAX_RANGE (1600), MIN_RANGE (400): 
    N = 3
    - Enrique:
	size 400: 0.003529
	size 800: 0.015004
	size 1600: 0.141522
    - Juan Diego:
    - Máquina Virtual:
    N = 300
    - Enrique:
	size 400: 0.317147 
	size 800: 1.159176
	size 1600: 11.471500
    - Juan Diego:
    - Máquina Virtual:
    N = 3000
    - Enrique:
	size 400: 2.674366
	size 800: 11.472271
	size 1600: 51.701752
    - Juan Diego:
    - Máquina Virtual:


3) Unicast vs multicast
    - Enrique:
    - Juan Diego:
    - Máquina Virtual:

**NOTA**: Obtener métricas usando Windows y mpicxx

## Índice

1) Hardware usado
2) Código paralelizado
3) Métricas
4) Conclusiones

## Slides de la presentación

1) Presentación
2) Hardware usado (descripción de los 3 PCs)
3) Código (sin paralelizar)
4) Código (paralelizado)
5) Métricas (comparación)
    - Rango de n
    - Número de procesos
    - Número de hilos
    - Unicast vs multicast
6) Conclusiones

## Hardware usado
1) Hardware usado Enrique (PC Windows 1)
- Intel Core i58250U @ 1,6GHz (4 Cores, 8 Threads) 
- 8GB RAM
- Caché
    - L1 Datos = 4 x 32 KBytes
    - L1 Intrucc. = 4 x 32 KBytes
    - L2 = 4 x 256 KBytes
    - L3 = 6 MBytes

2) Hardware usado Juan Diego (PC Windows 2)
- *Procesador*
- *RAM*
- Caché
    - L1 Datos = 
    - L1 Intrucc. = 
    - L2 = 
    - L3 = 

3) Hardware usado Juan Diego (PC Linux 1)
- *Procesador*
- *RAM*
- Caché
    - L1 Datos = 4 x 32 KBytes
    - L1 Intrucc. = 4 x 32 KBytes
    - L2 = 4 x 256 KBytes
    - L3 = 6 MBytes

## Reglas a tener en cuenta

1) Paginar las transparencias.
2) Usar letras grandes (mínimo fuente de 20).
3) No poner ni mucho texto ni muchas animaciones.
4) Exponer de 1 a 2 minutos por transparencia. En total, 10 minutos.
5) Incluír esquemas en las transparencias.
6) Respetar el límite de tiempo.


*Enlace a Google Slides:* https://docs.google.com/presentation/d/166iSeahtHmRk7qMAipfxsbJ0ByGwbSWP54L7QBPOq90/edit?usp=sharing
