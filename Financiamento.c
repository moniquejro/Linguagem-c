#include <stdio.h>

int main ()
{

    float casa;
    float salario;
    int anos;
    int meses;

    printf("\nQual o valor da casa:\n");
    scanf("%f", &casa);
    printf("Valor casa: %f\n", casa);
    
    printf("\nQual o salario da pessoa:");
    scanf("%f", &salario);
    printf("Valor salario: %f\n", salario);
    
    printf("\nQuantos anos de financianciamento:");
    scanf("%i", &anos);

    meses = anos * 12;

    printf("Anos pagando: %i\nMeses pagando: %i\n", anos, meses);


    return 0;
}