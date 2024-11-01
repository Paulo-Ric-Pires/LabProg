#include <stdio.h>
#include <math.h>

int main(){
   float a,b,c;
   float media_aritmetica,media_geometrica;

   puts("Digite valores para a,b e c.");
   puts("a: ");
   scanf("%f",&a);
   puts("b: ");
   scanf("%f",&b);
   puts("c: ");
   scanf("%f",&c);

   media_aritmetica = (a+b+c)/3;
   media_geometrica = pow((a*b*c),(0.33333333333));

   printf("A media aritmetica eh: %.2f", media_aritmetica);
   printf("\nA media geometrica eh: %.2f", media_geometrica);  
   
   return 0;
}