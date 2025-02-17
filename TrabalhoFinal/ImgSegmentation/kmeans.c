#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DATATYPE unsigned char
#include ".\LibProjeto.h"

//Aloca dinamicamente uma quantidade de elementos recibida por parâmetro em um array
int* alocaElementos(int totalElementos){
    int *c = NULL;
    if(!(c = (int*) malloc( totalElementos * sizeof(int)))){
        puts("Memória insuficiente para o array alocaElementos. ");
        exit(1);
    }
    return c;
}

//Usa o K-means++ para escolher os centroides e retorna um array de centroides
float* arrayCentroides(float (*distancia)(float,float), int n_centroides, DATATYPE *array, int totalElementos, DATATYPE maxv){
    float distanciaTotal, menorDist, count = 0;
    float d, x;
    int novoCentroide;

    float *centroides;
    if(!(centroides = (float*) malloc( n_centroides * sizeof(float)))){
        puts("Memória insuficiente para o array de centroides. ");
        exit(2);
    }
    float *menoresDistancias;
    if(!(menoresDistancias = (float*) malloc( totalElementos * sizeof(float)))){
        puts("Memória insuficiente para o array das menores distancias. ");
        exit(3);
    }

    centroides[0] = (float)array[rand() % maxv];

    for(int m = 1; m<n_centroides; m++){
        distanciaTotal = 0;
        count = 0;

        for(int n = 0;n<totalElementos;n++){
            menorDist = distancia((float)array[n], centroides[0]);
            for(int i = 0;i<m;i++){
                d = distancia((float)array[n], centroides[i]);
                if (d < menorDist) menorDist = d;
            }
            menoresDistancias[n] = menorDist;
            distanciaTotal += menorDist;
        }

        x = ((float)rand() / RAND_MAX) * distanciaTotal;
        for (int n = 0; n < totalElementos; n++) {
            count += menoresDistancias[n];
            if (count >= x) {
                novoCentroide = n;
                break;
            }
        }
        centroides[m] = (float)array[novoCentroide];
    }
    free(menoresDistancias);
    return centroides;
}

//Realiza a transformação, em um array passado por parâmetro, através do algoritmo  K-means e retorna o array transformado
 DATATYPE* kmeans(float (*distancia)(float,float),int n_centroides, int linhas, int colunas, DATATYPE *matrizTransformacao, DATATYPE maxv){
    int totalElementos = linhas * colunas;
    int *clusterElementos = alocaElementos(totalElementos);
    float *centroides = arrayCentroides(distancia, n_centroides,matrizTransformacao, totalElementos, maxv);
    int cluster;
    float d;

    float menorDistancia;
    int flag;
    do{
        flag = 0;

        for(int i=0;i<totalElementos;i++){
            cluster = 0;
            menorDistancia = distancia(matrizTransformacao[i],centroides[0]);

            for(int j=0;j<n_centroides;j++){
                d = distancia( matrizTransformacao[i], centroides[j]);
                if(menorDistancia > d){
                    menorDistancia = d;
                    cluster = j;
                }
            }
            if( !(clusterElementos[i] == cluster)){
                clusterElementos[i] = cluster;
                flag = 1;
            }
        }

        float countElementos = 0, somaElementos = 0;
        for(int m = 0;m < n_centroides; m++){
            countElementos = 0;
            somaElementos = 0;
            
            for(int n = 0; n<totalElementos; n++){
                if(clusterElementos[n] == m){
                    somaElementos += matrizTransformacao[n];
                    countElementos++;
                }
            }
            centroides[m] = (countElementos == 0 )? 0 : somaElementos / countElementos;
        }
        if(!flag){
            for(int m = 0;m < n_centroides; m++){
                for(int n = 0; n<totalElementos; n++){
                    if(clusterElementos[n] == m){
                        matrizTransformacao[n] = centroides[m];
                    }    
                }   
            }         
        }
    }while(flag);

    free(clusterElementos);
    free(centroides);

    return matrizTransformacao;
}

/*********************************************************************** */
/* ALUNO : PAULO RICARDO SOUSA PIRES FILHO                               */
/* MATRICULA : 20191045050154                                            */
/* AVALIÇÃO 4 : TRABALHO FINAL                                           */
/* 04.505.23 - 2024.2 - PROF. DANIEL FERREIRA                            */
/* COMPILADOR : (MinGW.org GCC-6.3.0-1) 6.3.0                            */
/*********************************************************************** */ 