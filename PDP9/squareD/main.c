#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
squareD
*/
int main()
{
    int p, q, brs;

    printf("Input batasan: ");
    scanf("%d", &brs);
    printf("\nOutput: \n");
    for(p=1; p<=brs; p++)
    {
        for(q=1; q<=1; q++)
        {
            if(p==1 || p==5 )
            {
                printf("01110");
            }
            else if (p==2 || p==3 || p==4){
            printf("10001");}
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
