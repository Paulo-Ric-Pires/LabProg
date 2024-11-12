#include <stdio.h>

int main(){
    int num=0,maior=0,menor=0,c;

    puts("Digite um numero inteiro(O numero zero termina o programa): ");
    scanf("%d",&num);
    menor = num;
    
    do{
        maior = (num>maior)? num:maior;
        menor = (num<menor)? num:menor;
        if(maior!=menor){
            printf("O maior numero que voce digitou foi %d e o menor %d.\n",maior,menor);
        }
        puts("Digite um numero inteiro(O numero zero termina o programa): ");
        scanf("%d",&num);
    
    }while(num!=0);

    

    return 0;
}