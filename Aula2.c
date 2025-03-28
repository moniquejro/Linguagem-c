#include <stdio.h>

int main ()
{

    int i = 1;
    int num1;
    int num2;

    do
    {

        printf("\n++++++++++++++++++++++++++++\n\nVamos lá!\nMe fale 2 numeros e vou \nAdivinhar qual deles é maior!\n\n++++++++++++++++++++++++++++\n\nEscolha um numero:\n");
        scanf("%i", &num1);

        printf("\nEscolha outro numero:\n");
        scanf("%i", &num2);

        if (num1 > num2) //bloco que vai executar se for verdade
        {
            printf("\n[---- O primeiro numero é maior! ----]\n");
        } 
        else if (num1 == num2) //bloco que vai executar se a condiçao1 for falsa e condiçao2 (essa) for verdade
        {
            printf("\n[---- Os numeros sao iguais! ----]\n");
        } 
        else //bloco que vai executar se as condiçoes anteriores forem falsas
        {
            printf("\n[---- O segundo numero é maior! ----]\n");
        }
        

        printf("\nQuer jogar de novo? SIM = 1 / NAO = 0\n");
        scanf("%i", &i);
    } while (i == 1);
    
    printf("\n==== Fim do jogo! ====\n==== Até a proxima! ====\n");


    return 0;
}