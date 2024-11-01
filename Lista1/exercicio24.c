#include <stdio.h>

int main(){
    int horas,minutos;
    int segundos_usuario;

    puts("Informe o numero de segundos: ");
    scanf("%d",&segundos_usuario);

    horas = (segundos_usuario / 60) / 60;
    minutos = (segundos_usuario / 60);
    
    printf("Existem %d hora/s, %d minuto/s e %d segundo/s no numero segundos informado.",horas,minutos,segundos_usuario);

    return 0;
}