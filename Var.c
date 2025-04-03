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
    //printf("varbool: %i / entrada: %i", varbool, entrada); //simples conferencia

    varbool = (entrada != 0); //Converte qualquer numero diferente de 0 para true

    printf("Estado: %s\n", varbool ? "LIGADO" : "DESLIGADO");
    //printf("varbool: %i / entrada: %i", varbool, entrada); //simples conferencia

    int varint = 10;
    // const int varint1 = 10; //tipo const NAO PODDE HAVER VARIACAO 
    printf("%i\n", varint);
    scanf("%i", &varint);
    printf("%i", varint);


    float varfloat = 10.10;
    printf("%f\n", varfloat);
    scanf("%f", &varfloat);
    printf("%f\n", varfloat);

    return 0;
}