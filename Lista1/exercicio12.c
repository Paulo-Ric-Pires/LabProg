#include <stdio.h>

int main(){
    int a,b,temp;

    printf("Digite um valor para 'a': ");
    scanf("%d",&a);
    printf("Digite um valor para 'b': ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("\nO valor de 'a' agora eh: %d",a);
    printf("\nE o valor de 'b' passou a ser: %d",b); 
    
    return 0;
}    