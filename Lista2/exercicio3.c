#include <stdio.h>

int main(){
    int F=1,num;

    puts("Digite um numero inteiro: ");
    scanf("%d",&num);

    for(int i=num;i>0;i--){
        F = F * i;
    }
    printf("O fatorial do numero %d eh %d",num,F);

    return 0;
}