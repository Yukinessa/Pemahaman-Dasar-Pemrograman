#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
triangleD
*/
int main()
{
    int a, b, brs;

    printf("Input bilangan: ");
    scanf("%d", &brs);
    printf("\nOutput: \n\n");
    for(a=1; a<=brs; a++)
    {
        for(b=a;b<=5;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
