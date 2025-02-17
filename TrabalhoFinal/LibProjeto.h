#ifndef LIBPROJETO_H
#define LIBPROJETO_H
#define DATATYPE unsigned char

//struct e funções para manipular dados de imagens PGM
struct pgm{
	int p;
	int colunas;
	int linhas;
	int maxvalor;
	unsigned char *pData;
};

struct pgm* PGMImageData(char *filename);

void writePGMImage(struct pgm *pio, char *filename);

//Algoritmo K-means
int* alocaElementos(int totalElementos);

float* arrayCentroides(float (*distancia)(float,float), int n_centroides, DATATYPE *array, int totalElementos, DATATYPE maxv);

DATATYPE* kmeans(float (*distancia)(float,float), int n_centroides, int linhas, int colunas, DATATYPE *matrizTransformacao, DATATYPE maxv);

//Função da distância
float distanciaManhattan1D(float x, float y);

#endif

/*********************************************************************** */
/* ALUNO : PAULO RICARDO SOUSA PIRES FILHO                               */
/* MATRICULA : 20191045050154                                            */
/* AVALIÇÃO 4 : TRABALHO FINAL                                           */
/* 04.505.23 - 2024.2 - PROF. DANIEL FERREIRA                            */
/* COMPILADOR : (MinGW.org GCC-6.3.0-1) 6.3.0                            */
/*********************************************************************** */ 