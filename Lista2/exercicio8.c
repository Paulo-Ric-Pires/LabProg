#include <stdio.h>
#include <math.h>

int main(){
    float valorMercadoria;
    float prestacoes,entrada;

    puts("Digite o valor da mercadoria");
    scanf("%f",&valorMercadoria);
    
    prestacoes = valorMercadoria / 3;
    
    if(((int)valorMercadoria - valorMercadoria) == 0 ){
        entrada = prestacoes;
    }else{
        prestacoes = ((int)prestacoes);
        entrada = valorMercadoria - (2*prestacoes);
    }

    printf("O valor a ser pago sera uma entrada de %f e duas prestacoes de %f",entrada,prestacoes);

    return 0;
}