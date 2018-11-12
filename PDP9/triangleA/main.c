#include <stdio.h>
#include <stdlib.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
triangleA
*/
int main()
{
    int a, b, c;

    printf("Input batasan (max 5): ");
    scanf("%d", &c);
    printf("\nOutput: \n");
    for(a=1; a<=c; a++)
    {
        for(b=1; b<=a*2-1; b++)
        {
            printf("%d", b);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
