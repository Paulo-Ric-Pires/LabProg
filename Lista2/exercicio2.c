#include <stdio.h>

int main(){
    int num;
    do{
        puts("Digite um numero: ");
        scanf("%d",&num);

        switch (num)
        {
        case 1:
            puts("Domingo");
            break;
        case 2:
            puts("Segunda");
            break;
        case 3:
            puts("Terca");
            break;    
        case 4:
            puts("Quarta");
            break;
        case 5:
            puts("Quinta");
            break;
        case 6:
            puts("Sexta");
            break;
        case 7:
            puts("Sabado");
            break;            
        default:
            break;
        }
    }while(num!=0);

    return 0;
}