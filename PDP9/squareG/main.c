#include <stdio.h>
#include <stdlib.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
squareG
*/
int main()
{
    int a, b, bil;

    printf("Inputkan batas: "); scanf("%d", &bil);
    printf("\nOutput: \n");
    for(a=1;a<=bil;a++)
    {
        for(b=a;b<=bil+a-1;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
