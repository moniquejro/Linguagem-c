#include <stdio.h>

int main ()
{

    int n,n1,x; //todas as variaveis do mesmo tipo declaradas juntas (confirmar se é boa pratica ou nao)
    float media = 0;

    printf("Digite quantas provas são:");
    scanf("%d", &n); //quantidade de provas
    n1 = 0; //iniciando contador

    while (n1 < n) //enquanto contador menor que quantidade de provas
    {
        printf("Digite a nota da prova %d:\n",n1+1); //n1 + 1 pq inicia em 0 e aqui é pra mostrar qual prova na fila está sendo coletada
        scanf("%d", &x);

        media = media + x; //inserindo notas novas à variavel media
        n1 = n1 + 1; //fazendo contador girar
    }

    if (media >= 7.0)
    {
        printf("\nO aluno passou de ano!\n");
    }
    else
    {
    printf("O aluno nao passou dde ano!\n");
    }
    

    printf("O aluno teve média: %.2f\n", media/n); //.2 antes do f indica quantas casas decimais ddepois da virgula sao consideradas (obrigada Calvi!)
    
    return 0;
}