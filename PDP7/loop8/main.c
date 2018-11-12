#include <stdio.h>
#include <stdlib.h>
/*
Kun Amrin Amanu
A11.2017.10333
loop8
*/
int main()
{
    int bln,ndogp=0,perawatan1=0;
    int ayam=3;
    int modala=450000;
    int endog=18;
    int perawatan=200000;
    int harga=14500;

    for(bln=3;bln<=19;bln++)
    {
        perawatan1=perawatan1+perawatan;
        if(bln>=4)
        {
            ndogp=ndogp+endog;
        }
        printf("Telur Ayam bulan %d = %d kg\n",bln-2,ndogp);
    }
    printf("\nmodal awal = %d\n",modala);
    printf("Perawatan = %d\n",perawatan1);
    printf("Hasil penjualan telur = %d\n",ndogp*harga);
    printf("Keuntungan = %d\n",ndogp*harga-(modala+perawatan1));
    return 0;
}
