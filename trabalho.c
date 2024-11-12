#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    unsigned char armarios=0,num,temp,c;
    srand(time(NULL));

    while(num != 3){
        unsigned char count=0;
        puts("Escolha uma das opcoes do menu:");
        puts("(1) para ocupar um armario.");
        puts("(2) para liberar um armario");
        puts("(3) para sair.");
        scanf("%hhu",&num);
        while ((c = getchar()) != '\n' && c != EOF);
        if((num!=1 )&& (num!=2) && (num!=3)){
        num=0;
        puts("--> Digite uma opcao valida.");
    }

        switch (num){
        case 1:
            do{
                temp = rand()%8;
                armarios = armarios | (1<<temp);    
            }while((armarios & (1<<temp))==1);
            break;
        case 2:
            for(int i = 0;i<8;i++){
                if(armarios & (1<<i)){
                    printf("O armario %d esta ocupado\n",i+1);
                }else{
                    printf("O armario %d esta livre\n",i+1),count++;
                }
            }   
            if(count!=8){
                do{
                    puts("Qual armario deseja desocupar?");
                    scanf("%hhu",&temp);
                    while ((c = getchar()) != '\n' && c != EOF);
                    if((armarios & (1<<(temp-1)))){
                        armarios = armarios & ~(1<<(temp-1));
                    }else{
                        puts("Selecione um aramrio que ja esta ocupado");
                    }           
                }while((armarios & (1<<(temp-1)))==1);
            }else{
                puts("Todos os armarios ja estao desocupados");
            }    
            break;
        }
    }

    return 0;
}