#include <stdio.h>

int main () {

    float deposito[12] = {0};
    float total;
    float media;

    printf("Insira os valores que deseja depositar em cada operaçao:\n");

    for (int i = 0; i < 12; i++){
        scanf("%f\n", &deposito[i]);
    }
    
    for (int i = 0; i < 12; i++)
    {
        total += deposito[i];
    }

    if (deposito[0] > deposito[1])
    {
        printf("O primeiro deposito é maior que o segundo.\n");
    }
    else if (deposito[1] > deposito[2]) {
        printf("Segundo deposito é maior que o terceiro\n");
    }
    else {
        printf("Existem muitas possibilidades, mas show must go on\n");
    }
    
    media = total / 12;

    printf("A media de cada deposito feito ao longo de 1 ano é de R$ %.2f\nO total depositado ao longo de 1 ano é igual a R$ %.2f.\n", media, total); 
    






    return 0;
}