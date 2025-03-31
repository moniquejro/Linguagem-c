#include <stdio.h>

int main ()
{

    int varnum1;
    int varnum2;

    printf("Me fale um numero qualquer:\n");
    scanf("%d", &varnum1);

    printf("Antes vc escolheu o numero %d. \nAgora outro numero:\n", varnum1);
    scanf("%d", &varnum2);

    if (varnum1 > varnum2)
    {
        printf("O PRIMEIRO numero é %d e é o maior!\n", varnum1);
    }
    else
    {
        printf("O SEGUNDO numero é %d e é maior!\n", varnum2);
    }
    


    return 0;
}