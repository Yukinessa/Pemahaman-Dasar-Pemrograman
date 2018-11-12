#include <stdio.h>
#include <stdlib.h>
/*
NAMA	:KUN AMRIN AMANU
NIM	:A11.2017.10333
array2.c
*/
int main()
{
    int a, b, c;
    int d[10]={0,1,2,3,4,5,6,7,8,9};
    float e[10]={1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0};
    char f[10]={'a','b','c','d','e','f','g','h','i','j'};

    printf("Data Interger: ");
    for(a=0; a<10; a++)
    {
        printf("[%d] ", d[a]);
    }
    printf("\nData Float: ");
    for(b=0; b<10; b++)
    {
        printf("[%.1f] ", e[b]);
    }
    printf("\nData Char: ");
    for(c=0; c<10; c++)
    {
        printf("[%c] ", f[c]);
    }
    printf("\n");

    return 0;
}
