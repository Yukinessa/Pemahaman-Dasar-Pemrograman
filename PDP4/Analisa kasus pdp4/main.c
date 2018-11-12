#include <stdio.h>
#include <stdlib.h>
/* NAMA = KUN AMRIN AMANU
   NIM  = A11.2017.10333
   kelompok = A11.4018
   pdp4
*/
int main()
{
    int pembelian_klg,total;
    char nama_pembeli[50];
    int tanggal,bulan,tahun;
    int satuan_harga;

    printf("Jumlah kaleng yang mau dibeli = ");
    scanf("%d",&pembelian_klg);

    if (pembelian_klg>=1&&pembelian_klg<=10)
    {
        satuan_harga=25000;
        printf("Harga per kaleng = Rp. 25.000\n\n");
        total=satuan_harga*pembelian_klg;

    }
    else if (pembelian_klg<=25&&pembelian_klg>=11)
    {
        satuan_harga=24500;
        printf("Harga perkaleng = Rp. 24.500\n\n");
        total=satuan_harga*pembelian_klg;
    }
    else if (pembelian_klg<=50&&pembelian_klg>=26)
    {
        satuan_harga=23000;
        printf("Harga perkaleng = Rp. 23.000\n\n");
        total=satuan_harga*pembelian_klg;
    }
    else if (pembelian_klg>=50)
    {
        satuan_harga=22000;
        printf("Harga perkaleng = Rp. 22.000\n\n");
        total=satuan_harga*pembelian_klg;
    }


    printf("============= Nota Pembelian ==============\n\n");
    printf(" Nama Pembeli = ");
    scanf(" %s",&nama_pembeli);
    printf(" Tanggal Pembelian = ");
    scanf(" %d-%d-%d",&tanggal,&bulan,&tahun);
    printf("total jumlah kaleng cat yang dibeli = %d\n",pembelian_klg);
    printf("total pembelian = %d",total);


    return 0;
}
