#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){
    char str[TAM];
    char letra;

    puts("Digite uma str.");
    fgets(str, TAM, stdin);
    puts("Digite uma letra");
    scanf("%c",&letra);

    for(int i=0;i<strlen(str);i++){
        if(str[i] == letra){
            printf("A letra %c existe na string ""%s"" .",letra,str);
            break;
        }
    }

    return 0;
}