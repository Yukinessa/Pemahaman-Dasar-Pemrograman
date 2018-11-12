#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
loop1
*/
int main()
{
    int angka, pangkat, a, hsl=1;

    printf("Masukkan angka: "); scanf("%d", &angka);
    printf("Masukkan pangkat: "); scanf("%d", &pangkat);
    printf("\nHasilnya: ");
    for(a=1;a<=pangkat;a++)
    {
        if(a<pangkat)
        {
            printf("%d x ", angka);
        }
        else
        {
            printf("%d = ", angka);
        }
        hsl=hsl*angka;
    }
    printf("%d\n", hsl);

    return 0;
}
