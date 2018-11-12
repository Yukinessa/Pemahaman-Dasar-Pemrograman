#include <stdio.h>
#include <stdlib.h>
/*
NAMA	:KUN AMRIN AMANU
NIM	:A11.2017.10333
array5.c
*/
int main()
{
    char a[6];
    int z;
    printf("Input : ");
    scanf("%s",&a);
    printf("Output : ");
    for (z=5; z>=0; z--)
    {
        printf("%c",a[z]);
    }
    return 0;
}
