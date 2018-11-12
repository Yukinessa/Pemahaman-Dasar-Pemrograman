#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
squareE
*/
int main()
{
    int a, b, bts;

    printf("Input batasan: "); scanf("%d", &bts);
    printf("\nOutput: \n");
    for(a=1;a<=bts;a++)
    {
        for(b=1;b<=bts;b++)
        {
            printf("%d",a,b);
        }
        puts("");
    }

    printf("\n");

    return 0;
}
