#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
triangleE
*/
int main()
{
    int bts, brs, a;

    printf("Input batasan: ");
    scanf("%d", &bts);
    printf("\nOutput: \n");

    brs=1;
    while(brs<=bts)
    {
        a=brs;
        while(a<=bts)
        {
            if(brs%2!=0)
            {
                printf("%d ",a*a);
            }
            else
            {
                printf("%d ",a);
            }
            a++;
        }
        brs++;
        printf("\n");
    }

    printf("\n");

    return 0;
}
