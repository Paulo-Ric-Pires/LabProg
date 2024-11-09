#include <stdio.h>

int main(){
    int pedro=110,jose=150, anos;

    while(pedro<jose){
        pedro = pedro + 3;
        jose = jose + 2;
        anos++;
    }
    printf("Pedro sera maior que Jose daqui ha %d anos.",anos);

    return 0;
}