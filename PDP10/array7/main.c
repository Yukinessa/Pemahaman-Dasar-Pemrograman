#include <stdio.h>
#include <stdlib.h>
/*
NAMA	:KUN AMRIN AMANU
NIM	:A11.2017.10333
array7.c
*/
int main()
{
    int a,b,c,d;
    printf("Masukkan Banyak Data : ");
    scanf("%d",&a);
    int angka[a];

    b = 0;
    while(b < a)
    {
        printf("Input Data : ");
        scanf("%d",&angka[b]);
        if(angka[b] % 2 != 0)
        {
            c = angka[b];
            d = b;
        }
        b++;
    }
    printf("Output : %d Terdapat Pada Index Ke-%d",c,d);
    return 0;
}
