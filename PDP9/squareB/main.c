#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
squareB
*/
int main()
{
    int a, b, brs;

    printf("Input batasan: ");
    scanf("%d", &brs);
    printf("\nOutput: \n");
    for(a=1; a<=brs; ++a)
    {
        for(b=1; b<=1; ++b)
        {
            if(a==1 || a==3 || a==5 )
            {
                printf("10101");
            }
            else if (a==2 || a==4){
            printf("01010");}
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
