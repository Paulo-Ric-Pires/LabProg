#include <stdio.h>
#define min(num1,num2) (num1<num2)? num1:num2
#define max(num1,num2) (num1>num2)? num1:num2

int main(){
    int soma=0,a,b;

    puts("Digite dois numeros");
    puts("Primeiro numero: ");
    scanf("%d",&a);
    puts("Segundo numero: ");
    scanf("%d",&b);


    for(int i=min(a,b);i<=max(a,b);i++){
        (i%2)? soma : (soma+=i);
    }
    printf("A soma dos numeros pares no intervalo eh: %d",soma);

    return 0;
}