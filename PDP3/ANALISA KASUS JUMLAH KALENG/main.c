#include <stdio.h>
#include <stdlib.h>
/*
    NAMA :  KUN AMRIN AMANU
    NIM  : A11.2017.10333
    PDP3
*/
int main()
{
    int kaleng = 25000;
    int kaleng2 = 10;
    int tanggal,tahun,luas_dinding;
    float total,total1;
    char nama[25],bulan[10];

    printf("Nama Pembeli = "); gets(nama);
    printf("Tanggal Pembelian = "); scanf("%d %s %d", &tanggal, &bulan, &tahun);
    printf("Luas Dinding = "); scanf("%d",&luas_dinding);

    printf("Tanda terima");
    printf("Nama pembeli = %s \n", nama);
    printf("Tanggal Pembelian = %d %s %d\n", tanggal,bulan,tahun);
    printf("Luas dinding = %d\n",luas_dinding);
    total = luas_dinding/kaleng2;
    printf("Jumlah kaleng = %2.f \n",total);
    total1 = total*kaleng;
    printf("harga = %2.f \n",total1);

    return 0;
}
