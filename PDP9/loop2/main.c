#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
loop2
*/
int main()
{
    int faktor, angka;

    printf("Masukkan angka : "); scanf("%d", &angka);
    printf("\nFaktor dari angka %d adalah: ", angka);
    for (faktor=1; faktor<=angka; faktor++)
    {
        if(angka%faktor==0)
        {
            printf("%d ", faktor);
        }
    }
    printf("\n");

    return 0;
}
