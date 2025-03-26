#include <stdio.h>

int main ()
{

    float media;
    int continuar;

    

    //printf("Analisar nota? SIM = 1 / NAO = 0\n");
    //scanf("%i", &continuar);

    while (continuar == 1)
    {
        printf("Analisar nota? SIM = 1 / NAO = 0 (%i, %f)\n", continuar, media);
        scanf("%i", &continuar);
        
        printf("\nQual a nota do aluno: (%i, %f)\n", continuar, media);
        scanf("%f", &media); //nao usar \n no scanf

        if (media >= 4.0 && media < 7.0)
        {
            printf("O aluno tem direito a exame! (%i, %f)\n", continuar, media);
            //printf("Analisar nota? SIM = 1 / NAO = 0\n");
            //scanf("%i", &continuar);
        }
        if (media >=7.0){
            printf("O aluno passou! (%i, %f)\n", continuar, media);
            //printf("Analisar nota? SIM = 1 / NAO = 0\n");
            //scanf("%i", &continuar);
        }
        else{
            printf("O aluno NAO tem direito ao exame! (%i, %f)\n", continuar, media);
            //printf("Analisar nota? SIM = 1 / NAO = 0\n");
            //scanf("%i", &continuar);
        }
    }
    

    

    return 0;
}