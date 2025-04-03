#include <stdio.h>

int main () {

    /*
    int matriz[3][3] = {{1, 2, 3,},
                        {4, 5, 6},
                        {7, 8, 9}};
    
    int matriz0[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; //outra maneira de declarar os membros da matriz

    printf("Matriz: %i\n", matriz[0][0]); //como chamar a matriz
    */

   int matriz [5][5] = {{1, 2, 3, 4, 5},
                        {6, 7, 8, 9, 10},
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20},
                        {21, 22, 23, 24, 25}};

    for (int i = 0; i < 5; i++){
        for (int m = 0; m < 5; m++){
            printf("%i\t", matriz[i][m]); //contra-barra T indica tabulaçao/paragrafo

            //primeiro roda o ciclo for de dentro, montando as linhas
            //qnd terminar o FOR do M, ele vai rodar o for de fora
            //rodando o de fora ele muda de coluna
        }
        printf("\n"); //apenas para pular linha e ficar no formato de matriz
    
    }
    

    return 0;
}