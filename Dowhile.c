#include <stdio.h>

int main ()
{

    int i =0;

    while (i != 0) //primeiro verifica ou interrompe, depois imprime
    {
        printf("Teste 1\n");
    }

    do //primeiro imprime na tela, depois interrompe
    {
        printf("Teste 2\n");
    } while (i != 0);


    return 0;
}