#include <stdio.h>
#include <stdbool.h>

int main ()

{
    
    /*
    char varchar = 'a';
    printf("%c\n", varchar);
    scanf("%c", &varchar);
    printf("%c\n", varchar);
    */

    bool varbool;
    int entrada;

    printf("Voce deseja ligar ou desliar? LIGAR = 1 / DESLIGAR = 0\n");
    scanf("%d", &entrada);
    printf("varbool: %i / entrada: %i", varbool, entrada); //simples conferencia

    varbool = (entrada != 0); //Converte qualquer numero diferente de 0 para true

    printf("Estado: %s\n", varbool ? "LIGADO" : "DESLIGADO");
    printf("varbool: %i / entrada: %i", varbool, entrada); //simples conferencia

    return 0;
}