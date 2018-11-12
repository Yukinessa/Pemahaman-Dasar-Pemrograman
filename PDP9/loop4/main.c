#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
loop4
*/
int main()
{
    int a, b, c, batas, jumlah=0;

    printf("Masukkan bilangan prima: ");
    scanf("%d", &batas);
    printf("\nBilangan prima dari 1-%d: ", batas);
    for (a=2; a<batas; a++)
    {
        int cek=0;
        for (c=2; c<a; c++)
        {
            if(a%c==0)
            {
                cek=1;
            }
        }
        if (cek==0)
        {
            jumlah=jumlah+a;
            printf("%d ", a);
        }
    }
    printf("\nJumlah deret bilangan prima: %d", jumlah);
    printf("\n");

    return 0;
}
