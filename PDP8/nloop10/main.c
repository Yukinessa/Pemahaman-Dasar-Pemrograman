#include <stdio.h>
#include <stdlib.h>
/*
Nama    : Kun Amrin Amanu
NIM     : A11.2017.10333
nloop10
*/
int main()
{
    int a,b;

    a=1;
    do
    {
        printf("Perulangan ke = %d\n",a);
        a++;
        for (b=1;b<=5;b++)
        {
            printf("Angka ke -%d\n",b);
            b++;
        }
    }
    while (a<=7);
    return 0;
}
