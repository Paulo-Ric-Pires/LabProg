#include <stdio.h>
#define min(num1,num2) (num1<num2)? num1:num2
#define max(num1,num2) (num1>num2)? num1:num2

int main(){
    int quantidade,a,b,somatorio=0;

    puts("Digite dois numeros");
    puts("Primeiro numero: ");
    scanf("%d",&a);
    puts("Segundo numero: ");
    scanf("%d",&b);

    quantidade = max(a,b) - min(a,b);

    for(int i=min(a,b);i<=max(a,b);i++){
        somatorio +=i;
    }

    printf("A media arimetica do intervalo eh %.2lf: ",((float)somatorio)/quantidade);

    return 0;
}