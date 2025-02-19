#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <time.h>
#include "./LibProjeto.h"
#define QTDIMG 100
#define DIRETORIO "dataset_Herlev_reduzido_PGM/normal_superficiel"
#define K 3

int main(){
	srand(time(NULL));
    int temp, count = 0;
	clock_t begin, end;
	double time_per_img, time_total=0;
	long long int a = 999999999;
	char filename[200];
	

    DIR *d;
    struct dirent *dir;

	begin = clock();

    d = opendir(DIRETORIO);
    if (!d) {
        perror("Erro ao abrir diretório");
        return 1;
    }

	if (d){
		
			
			while ((dir = readdir(d)) != NULL && count < QTDIMG)
			{

				filename[0] = '\0';
				snprintf(filename, sizeof(filename), "%s/%s", DIRETORIO, dir->d_name);

				printf("%s\n", dir->d_name);
					
				struct pgm* data = PGMImageData(filename);

				kmeans(distanciaManhattan1D, K, data->linhas, data->colunas, data->pData, data->maxvalor);

				if(strstr(filename, "-k") != NULL){
					snprintf(filename, sizeof(filename), "%s/%s", DIRETORIO, dir->d_name);
				}else{
					snprintf(filename, sizeof(filename), "%s/%s-k%d", DIRETORIO, dir->d_name,K);
				}	

				writePGMImage(data, filename);

				free(data->pData);

				free(data);
					
				count++;
			}
		

			temp = a;
			while(temp){
				temp--;
			}
			

		
	}	
	closedir(d);

	end = clock();

	time_total = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("Tempo Total: %lf\n",time_total);


    return 0;
}

/*********************************************************************** */
/* ALUNO : PAULO RICARDO SOUSA PIRES FILHO                               */
/* MATRICULA : 20191045050154                                            */
/* AVALIÇÃO 4 : TRABALHO FINAL                                           */
/* 04.505.23 - 2024.2 - PROF. DANIEL FERREIRA                            */
/* COMPILADOR : (MinGW.org GCC-6.3.0-1) 6.3.0                            */
/*********************************************************************** */ 