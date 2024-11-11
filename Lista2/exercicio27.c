#include <stdio.h>

int main(){
    int maior=0, menor=0,num;

    puts("Digite um numero: ");
    scanf("%d",&menor);

    while(num >= 0 || ((num <= 0) && (num%2 !=0))){
        puts("Digite um numero: ");
        scanf("%d",&num);
        if(num<menor){
            menor = num;
        }
        if(num>maior){
            maior = num;
        }
        if(maior!=menor){
            printf("O maior numero eh %d e o menor eh %d\n",maior,menor);
            printf("O produto do maior pelo menor eh: %d\n",(maior*menor));
        }
    }


    return 0;
}