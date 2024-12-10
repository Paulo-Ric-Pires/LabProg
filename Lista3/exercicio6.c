#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){
     char str[TAM];

    puts("Digite uma string.");
    fgets(str, TAM, stdin);

    int finalStr = strlen(str) - 1 ,temp;
    for(int i=0;i<strlen(str)/2;i++){
        temp = str[i];
        str[i] = str[finalStr];
        str[finalStr] = temp;
        finalStr--;
    }
    printf("%s",str);

    return 0;
}