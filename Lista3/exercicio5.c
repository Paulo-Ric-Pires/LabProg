#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){
    char str1[TAM];
    char str2[TAM];
    

    puts("Digite a primeira string.");
    fgets(str1, TAM, stdin);
    puts("Digite a segunda string.");
    fgets(str2, TAM, stdin);
    //Versao sem strcat
    /*
    int finalStr1 = strlen(str1) - 1;
    for(int i=0;i<TAM;i++){
       str1[finalStr1] =  str2[i];
       finalStr1++;
    }
    
    printf("As strings concatenadas:\n");
    printf("%s",str1);
    */
    //Versao com strcat
    strcat(str1,str2);
    printf("As strings concatenadas:\n");
    printf("%s",str1);

    return 0;
}