#include <stdio.h>

int main ()
{
    int i;

    printf("Insira um numero inteiro de 1 a 5.\n");
    scanf("%i", &i);

    switch (i)
    {
    case 1:
        printf("primeiro\n");
        break;
    case 2:
        printf("segundo\n");
        break;
    case 3:
        printf("terceiro\n");
        break;
    case 4:
        printf("quarto\n");
        break;
    case 5:
        printf("quinto\n");
        break;
    default:
        printf("Opcao invalida\n");
        break;
    }
    return 0;
}