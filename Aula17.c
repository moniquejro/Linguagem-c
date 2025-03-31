#include <stdio.h>

int main()
{   
    int num1, num2;

    printf("digite 2 numeros inteiros:\n");
    scanf("%i %i", &num1, &num2);

    if (num2 == 0)
    {
        printf("Divisao por 0 nao permitido.\n");
    }
    else {
        if (num1 % num2 == 0) //validando a divisao do primeiro num pelo 2o num.
        {
            printf("%i é divisivel por %i.\n", num1, num2);
        }
        else {
            printf("%i NAO é divisivel por %i.\n", num1, num2);
        }
        
    }
    

    return 0;
}