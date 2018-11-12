#include <stdio.h>
#include <stdlib.h>
/*
Nama    : Kun Amrin Amanu
NIM     : A11.2017.10333
nloop6
*/
int main()
{
    int a,b;

    for(a=1;a<=7;a++)
    {
        printf("Perulangan ke = %d\n",a);
        b=1;
        do
        {
            printf("Angka ke -%d\n",b);
            b++;
        }
        while (b<=7);
    }
    return 0;
}
