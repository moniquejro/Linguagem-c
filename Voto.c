#include <stdio.h>

int main ()
{

    int varidade;

    printf("Vamos descobrir se voce tem idade para votar. Quantos anos voce tem?\n");
    scanf("%i", &varidade);

    if (varidade >= 16)
    {
        printf("Voce pode SIM votar. Sua idade é %i.\n", varidade);
    }
    else
    {
        printf("Voce NAO pode votar. Sua idade é %i.\n", varidade);
    }
    

    return 0;
}