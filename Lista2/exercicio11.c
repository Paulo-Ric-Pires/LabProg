#include <stdio.h>
#define min(num1,num2) (num1<num2)? num1:num2
#define max(num1,num2) (num1>num2)? num1:num2

int main(){
    int a,b,c;

    puts("Digite dois numeros");
    puts("Primeiro numero: ");
    scanf("%d",&a);
    puts("Segundo numero: ");
    scanf("%d",&b);

    for(int i = min(a,b); i < (max(a,b)+1);i++){
        if((i % 4) == 0){
            printf("O numero %d eh multiplo de 4 e seu quadrado eh: %d\n",i,(i*i));
        }
    }

    return 0;
}