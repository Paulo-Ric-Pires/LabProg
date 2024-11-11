#include <stdio.h>

int main(){
    int num;

    puts("Digite um numero");
    scanf("%d",&num);

    for(int i=1;i<=10;i++){
        printf("%d x %d\n",num,i);
    }

    return 0;
}