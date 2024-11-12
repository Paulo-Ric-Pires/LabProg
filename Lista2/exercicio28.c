#include <stdio.h>

int main(){
    unsigned char x=0,y=0;
    unsigned char bitX=0,menosSignificativos=0,c;
    char binarioX[8];

    puts("Digite um numero inteiro para x de 0 a 255: ");
    scanf("%hhu",&x);
    while ((c = getchar()) != '\n' && c != EOF);
    puts("Digite um numero inteiro para y de 4 a 251: ");
    scanf("%hhu",&y);
    while ((c = getchar()) != '\n' && c != EOF);


    if(y>=4 && y<=251){
        unsigned temp = 0,temp2;
        for(int i = y-4;i<y+5;i++){
            if(i==y) continue;

            printf("\nValor de %d antes da alteracao do bit menos significativo pelo bit de x: ");
            for(int j=7;j>=0;j--){
                printf("%d",temp & ((1<<j)));
            }

            temp = i;
            temp = temp & ~((x & (1<<bitX))<<0);
            printf("\nValor de %d com o bit menos significativo alterado pelo bit de x: ",i);
            for(int j=7;j>=0;j--){
                printf("%d",temp & ((1<<j)));
            }

            binarioX[bitX]= temp & ((1<<0));

            menosSignificativos += ( (temp & ((1<<0))) << bitX);
            bitX++;
        }

    }else{
        puts("O numero inteiro de y deve estar no intervalo fechado de 4 e 251.");
    }

    printf("\nTodos os bits menos significativos de x escondidos nos 4 numeros anteriores e posterios a y:\n");
    for(int i=7;i>=0;i--){
        printf("%d",binarioX[i]);
    }
    
    printf(" == %hhu",x,menosSignificativos);

    return 0;
}