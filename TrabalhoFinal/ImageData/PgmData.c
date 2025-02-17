#include <stdio.h>
#include <stdlib.h>
#include ".\LibProjeto.h"
/*
struct pgm{
	int p;
	int colunas;
	int linhas;
	int maxvalor;
	unsigned char *pData;
};*/

//Função para coletar os dados do arquivo PGM e salvar em uma struct pgm
struct pgm* PGMImageData(char *filename){
	struct pgm *pio = (struct pgm*)malloc(sizeof(struct pgm));
	FILE *fp;
	char ch;

	if (!(fp = fopen(filename,"rb"))){
		perror("Erro ao abrir arquivo.");
		exit(1);
	}

	if ( (ch = getc(fp))!='P'){
		puts("A imagem fornecida não está no formato pgm");
		exit(2);
	}
	
	pio->p = getc(fp)-48;
	
	fseek(fp,1, SEEK_CUR);

	while((ch=getc(fp))=='#'){
		while( (ch=getc(fp))!='\n');
	}

	fseek(fp,-1, SEEK_CUR);

	fscanf(fp, "%d %d",&pio->colunas,&pio->linhas);
	if (ferror(fp)){ 
		perror(NULL);
		exit(3);
	}	
	fscanf(fp, "%d",&pio->maxvalor);
	fseek(fp,1, SEEK_CUR);

	pio->pData = (unsigned char*) malloc(pio->linhas * pio->colunas * sizeof(unsigned char));

	if (pio->pData == NULL) {
        puts("Erro ao alocar memória para os dados da imagem!\n");
        exit(4);
    }

	switch(pio->p){
		case 2:
			puts("Lendo imagem PGM (dados em texto)");
			for (int k=0; k < (pio->linhas * pio->colunas); k++){
				fscanf(fp, "%hhu", pio->pData+k);
			}
		break;	
		case 5:
			puts("Lendo imagem PGM (dados em binário)");
			fread(pio->pData,sizeof(unsigned char),pio->linhas * pio->colunas, fp);
		break;
		default:
			puts("Não está implementado");
	}
	
	fclose(fp);

	return pio;
}

//Salva o arquivo PGM recebendo como parâmetro uma struct PGM e o nome com que o arquivo será salvo 
void writePGMImage(struct pgm *pio, char *filename){
	FILE *fp;
	char ch;

	if (!(fp = fopen(filename,"wb"))){
		perror("Erro.");
		exit(1);
	}
	if(pio->p == 5){
		fprintf(fp, "%s\n","P5");
	}else if(pio->p == 2){
		fprintf(fp, "%s\n","P5");
	}else{
		puts("A imagem fornecida não está no formato pgm");
		exit(2);
	}
	fprintf(fp, "%d %d\n",pio->colunas, pio->linhas);
	fprintf(fp, "%d\n", pio->maxvalor);

	fwrite(pio->pData, sizeof(unsigned char),pio->colunas * pio->linhas, fp);

	fclose(fp);
	free(pio);

}

/*********************************************************************** */
/* ALUNO : PAULO RICARDO SOUSA PIRES FILHO                               */
/* MATRICULA : 20191045050154                                            */
/* AVALIÇÃO 4 : TRABALHO FINAL                                           */
/* 04.505.23 - 2024.2 - PROF. DANIEL FERREIRA                            */
/* COMPILADOR : (MinGW.org GCC-6.3.0-1) 6.3.0                            */
/*********************************************************************** */ 
