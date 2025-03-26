#include <stdio.h>

int main ()
{

    int varmulti;
    int varcount;

    printf("Voce quer saber a tabuada do numero: \n");
    scanf("%i", &varmulti);

    for (varcount = 0; varcount <=10; varcount++)
    {
        printf("%ix%i = %i\n", varmulti, varcount, varmulti * varcount);
    }
    

    return 0;
}