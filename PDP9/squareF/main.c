#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
squareF
*/
int main()
{
    int a, b, brs;

    printf("Input batasan: "); scanf("%d", &brs);
    printf("\nOutput: \n");
    for(a=1; a<=brs; a++)
    {
        for(b=1; b<=brs; b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
