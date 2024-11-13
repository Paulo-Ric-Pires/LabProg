#include <stdio.h>
#define min(num1,num2) (num1<num2)? num1:num2
#define max(num1,num2) (num1>num2)? num1:num2

int main(){
    int conta,a,b;

    puts("Digite dois numeros");
    puts("Primeiro numero: ");
    scanf("%d",&a);
    puts("Segundo numero: ");
    scanf("%d",&b);

    for(int i=min(a,b);i<(max(a,b)+1);i++){
        if(i%3) continue;

        else printf("O numero %d e divisivel por 3\n",i),conta++;
    }    
    return 0;
}