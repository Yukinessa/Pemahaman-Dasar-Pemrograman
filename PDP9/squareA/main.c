#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
squareA
*/
int main()
{
    int a, b, bil;

    printf("Input batasan: ");
    scanf("%d", &bil);
    printf("\nOutput: \n");
    for(a=1;a<=bil;a++)
    {
        for(b=1;b<=bil;b++)
        {
            if(b%2==1)
            {
                printf("0");
            }
            else if(b%2==0)
            {
                printf("1");
            }
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
