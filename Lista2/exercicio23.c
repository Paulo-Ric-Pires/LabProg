#include <stdio.h>

int main(){
    int num1,num2;

    puts("Digite um numero: ");
    scanf("%d",&num1);

    num2 = num1;

    num1++;
    printf("%d\n",num1);
    ++num2;
    printf("%d\n",num2);



    return 0;
}