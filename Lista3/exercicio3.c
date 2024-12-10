#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){
    char str[TAM];

    puts("Digite uma string.");
    fgets(str, TAM, stdin);

    int contaChar=0;
    for(int i=0;i<TAM;i++){
        if(str[i]!='\0'){
            contaChar++;       
        }else{
            break;
        }
    }
    printf("A string possui %d caracteres.",contaChar-1);
}