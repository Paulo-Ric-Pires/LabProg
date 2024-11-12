#include <stdio.h>

int main(){
    int numerador=0,denominador=0,c;

    puts("Digite o numerador: ");
    scanf("%d",&numerador);
    while ((c = getchar()) != '\n' && c != EOF);
    puts("Digite o denominador: ");
    scanf("%d",&denominador);

    while(denominador == 0){
        puts("-->Denominador deve ser diferente de zero");
        puts("Digite o denominador: ");
        scanf("%d",&denominador);
    }

    printf("O resultado da divisao eh: %d",(numerador/denominador));

    return 0;
}