#include <stdio.h>

int main()
{

    /*
    Escrever um programa para aprovar emprestimo bancario para a compra de uma casa. Pergunte o valor da casa, o salario da pessoa e em quantos anos pretende pagar.
    A prestaçao mensal nao pode exceder 30% do salario, caso contario o emprestimo é negado.
    */

    char nome[30];
    float casa;
    float salario;
    int anos;
    int meses;
    float prestacao;
    float minimo;

    printf("Informe seu nome:\n");
    scanf("%s", nome);

    printf("\nQual o valor da casa:\n");
    scanf("%f", &casa);
    printf("Valor casa: %f\n", casa);

    printf("\nQual o salario da pessoa:");
    scanf("%f", &salario);
    printf("Valor salario: %f\n", salario);

    printf("\nQuantos anos de financianciamento:");
    scanf("%i", &anos);

    meses = anos * 12;
    prestacao = casa / (anos * 12); // encontrar valor prestaçao, quantos meses pagando
    minimo = 30 * (salario / 100);  // encontrar valor teto da prestaçao de 30% salario

    printf("Seu nome é %s.\nAnos pagando: %i\nMeses pagando: %i\nValor prestaçao: R$ %f\nO minimo do salario é: %f\n", nome, anos, meses, prestacao, minimo);

    if (prestacao <= minimo)
    {
        printf("O emprestimo foi liberado!\nA prestaçao é no valor de: %f sendo paga em %i meses.\n", prestacao, meses);
    }
    else
    {
        printf("O emprestimo NAO foi aprovado. \nA parcela de R$ %f é MAIOR que o minimo que poderia ser utilizado do salario, que é de R$ %f.\n", prestacao, minimo);
    }
    
    return 0;
}