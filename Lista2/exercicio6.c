#include <stdio.h>

int main(){
    int num=0;
    char confirma,c;
    float votosPaulo=0,votosRenata=0,votosNulos=0,votosBrancos=0;

    while(num >= 0){
        puts("--> Para votar no candidato/a Paulo, digite 5.");
        puts("--> Para votar no candidato/a Renata, digite 7.");
        puts("--> Para votar em branco, digite 0.");
        scanf("%d",&num);
        while ((c = getchar()) != '\n' && c != EOF);
        puts("--> Confirmar? Digite 's' e 'n' para negar");
        scanf("%c%*c",&confirma);
        if(confirma=='n'){
            printf("%c\n",confirma);
            continue;
        }

        switch (num){
         case 5:
           votosPaulo+=1;
            break;
         case 7:
            votosRenata+=1;
            break;
         case 0:
            votosBrancos+=1;
            break;    
        default:
            if(num!='n' && num > 0){
                votosNulos+=1;
            }    
            break;
        }
    }

    float totalVotos=0;

    totalVotos = votosBrancos + votosNulos + votosPaulo + votosRenata;


    printf("Paulo o obteve %% %.2f dos votos\n",((votosPaulo/totalVotos)*100));
    printf("Renata o obteve %% %.2f dos votos\n",((votosRenata/totalVotos)*100));
    printf("%% %.2f dos votos foram em branco\n",((votosBrancos/totalVotos)*100));
    printf("%% %.2f dos votos foram nulos\n",((votosNulos/totalVotos)*100));
    (votosPaulo>votosRenata)? puts("O candidato Paulo esta eleito"):puts("A candidata Renata esta eleita");

    return 0;
}