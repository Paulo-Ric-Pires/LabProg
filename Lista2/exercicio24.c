#include <stdio.h>
#include <math.h>

int main(){
    float h;
    int a,b;

    for(a=1;a<=500;a++){
        for(b=1;b<=500;b++){
            h = sqrt( (pow((double)a,(double)2)) + (pow((double)b,(double)2)) );
            if(((h - (int)h) ==0) && h<500){
                printf("%.2f = h, a = %d, b = %d\n",h,a,b);
            }
        }
    }
    

    return 0;
}