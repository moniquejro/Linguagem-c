#include <stdio.h>

int main ()
{
    int n1;
    int n2;
    int result;
    int resto;

    printf("Vou adivinhar se o numero que voce pensou é par ou impar. Vamos la!\n");
    printf("Digite um numero:");
    scanf("%i", &n1);

    result = n1 / 2;
    

    if (result != 0)
    {
        printf("Seu número dividido por 2 é = a: %i, logo é impar.\n", result);
    }
    else 
    {
        printf("Seu numero dividido por 2 é = a: %i, logo é par.\n", result);
    }
    
/*
    printf("\nAgora digite outro numero:");
    scanf("%i", &n2);
    printf("O valor da area do retangulo é de: %i\n", n1);
*/
    return 0;
}