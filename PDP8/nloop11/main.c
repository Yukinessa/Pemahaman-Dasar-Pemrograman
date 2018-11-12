#include <stdio.h>
#include <stdlib.h>
/*
Nama    : Kun Amrin Amanu
NIM     : A11.2017.10333
nloop11
*/
int main()
{
    int a,b;

    a=1;
    do
    {
        printf("Perulangan ke = %d\n",a);
        a++;
        b=1;
        while (b<=5)
        {
            printf("Angka ke -%d\n",b);
            b++;
        }
    }
    while(a<=5);
    return 0;
}
