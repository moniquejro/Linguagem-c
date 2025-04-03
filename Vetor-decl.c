#include <stdio.h>

int main ()
{

    /*
    int vetor[5] = {}; //chaves vazia é p/ inserir 0 no resultado ou em algum vetor

    for (int i = 0; i < 5; ++i) {
        printf("vetor: %i\n", vetor[i]);
    }
    */


    float notas[5] = {0};
    float total = 0;
    float media = 0;

    printf("Insira 5 notas:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        total += notas[i]; //adicionar na var TOTAL o valor inserido em NOTAS cada vez que o ciclo roda
    }
    
    media = total/ 5;

    printf("A media do aluno é: %.2f\n", media); //delimitar casa decimal

    return 0;
}