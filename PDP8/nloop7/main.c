#include <stdio.h>
#include <stdlib.h>
/*
Nama    : Kun Amrin Amanu
NIM     : A11.2017.10333
nloop7
*/
int main()
{
    int a,b;

    a=1;
    while(a<=7)
    {
        printf("Perulangan ke = %d\n",a);
        a++;
        for(b=1;b<=5;b++)
        {
            printf("Angka ke -%d\n",b);
        }
    }
    return 0;
}
