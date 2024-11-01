#include <stdio.h>

int main(){
    char sexo;
    float altura;

    printf("Qual o sexo da pessoa? (M/F)\n");
    scanf("%c",&sexo);
    printf("\nQual a altura da pessoas em metros? ");
    scanf("%f",&altura);

    if(sexo == 'M'){
        printf("\nO peso ideal da pessoa eh: %.2f kg", ((72.7 * altura) - 58));
    }else if(sexo == 'F'){
        printf("\nO peso ideal da pessoa eh: %.2f kg", ((62.1 * altura) - 44.7));
    }else{
        printf("\nOpcao invalida.");
    }

    return 0;
}