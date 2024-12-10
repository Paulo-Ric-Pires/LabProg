#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){
    char str1[TAM];
    char str2[TAM];

    puts("Digite a primeira string.");
    fgets(str1, TAM, stdin);
    puts("Digite a segunda string.");
    fgets(str2, TAM, stdin);

    //Versao sem strcmp
    /*
    int flag=0;
    if(strlen(str1)==strlen(str2)){
        for(int i=0;i<TAM;i++){
            if(str1[i]!=str2[i]){
                flag = 1;
                break;
            }
        }
        (flag==1)? puts("As strings sao diferentes."):puts("As strings sao iguais.");
    }else{
        puts("As duas strings sao diferentes.");
    }
    */

    //Versao com strcmp
    (strcmp(str1,str2))? puts("As strings sao diferentes"):puts("As strings sao iguais");

    return 0;
}