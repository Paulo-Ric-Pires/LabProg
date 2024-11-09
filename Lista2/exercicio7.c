#include <stdio.h>

int main(){
    int numerador=0,denominador=0;

    puts("Digite o numerador: ");
    scanf("%d%*c",&numerador);
    puts("Digite o denominador: ");
    scanf("%d%*c",&denominador);

    while(denominador == 0){
        puts("-->Denominador deve ser diferente de zero");
        puts("Digite o denominador: ");
        scanf("%d",&denominador);
    }

    printf("O resultado da divisao eh: %d",(numerador/denominador));

    return 0;
}