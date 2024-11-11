#include <stdio.h>

int main(){
    int somatorio=0,num;

    puts("Digite um numero de 5 digitos:");
    scanf("%d",&num);

    int temp=0 ,temp2=0;
    for(int i=10000,j=1;i>0;i/=10,j*=10){
        temp = ((num/i) - temp2) * j;
        temp2 = (num/i) *10;
        somatorio += temp;
    }
    (num==somatorio)? puts("O numero eh um palindromo."):puts("O numero nao eh um palindromo.");


    return 0;
}
