#include <stdio.h>

int main ()
{
    int again;
    int num;
    int resto;

    printf("Vamos jogar? SIM = 1 / NAO = 0\n");
    scanf("%i", &again);

    switch (again)
    {
    case 1:
        printf("Vou adivinhar se o numero é par ou impar\nMe fale um numero:");
        scanf("%i", &num);

        resto = num % 2;

        if (resto == 0)
        {
            printf("O numero %i é par - %i,- %i,- %i\n",num, resto, num, again);
            printf("Quer jogar de novo?\n");
            scanf("%i", &again);
        } else {
            printf("O numero %i é impar - %i,- %i,- %i\n", num, resto, num, again);
        }

        break;
    case 0:
        printf("Até a proxima!\n");
        break;
    
    default:
        printf("Opcao invalida.\n");
        break;
    }


    return 0;
}