#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    NAMA = Kun Amrin Amanu
    NIM = A11.2017.10333
    PDP5 Soal 2
*/
int main()
{
    char nama[30];
    char tanggal[25];
    int code,jumlah_kaleng, total;
    int dulux = 24500;
    int nippon = 23500;
    int avitex = 20000;
    int mowilex = 18500;
    int catylac=23500;
    int tiap_kaleng=10;
    int harga_dulux, harga_catylac, harga_nippon, harga_vitex, harga_mowilex;
    int total_dulux, sub_total_catylac, sub_total_nippon, sub_total_vitex, sub_total_mowilex;
    float luas, jaslikaleng;


    puts(" 1  Dulux Rp 24500 ");
    puts(" 2  Catylac Rp 23500 ");
    puts(" 3  Nippon Paint Rp 23500 ");
    puts(" 4  Avitex Rp 20000 ");
    puts(" 5  Mowilex Rp 18500 ");
    printf("\n1 Kaleng hanya bisa mengecat %d m2\n", tiap_kaleng);
    printf("Masukkan Nama Konsumen : ");
    gets(nama);
    printf("Masukkan Tanggal Pembelian: ");
    gets(tanggal);
    fflush(stdin);
    printf("Masukkan Luas Dinding : ");
    scanf("%f", &luas);
    printf("Masukkan Pilihan Kode Merk Cat : ");
    scanf("%d", &code);

    jaslikaleng=luas/tiap_kaleng;
    jumlah_kaleng=ceil(jaslikaleng);

    printf("Nota Pembelian\n");
    switch(code)
        {
        case 1:
            if(jumlah_kaleng<=25 && jumlah_kaleng>=1)
            {
                harga_dulux=24500;
            }
            else if(jumlah_kaleng>=50 && jumlah_kaleng<=26)
            {
                harga_dulux=23000;
            }
            else
            {
                harga_dulux=22000;
            }
            printf("Nama Pembeli : %s\n", nama);
            printf("Tanggal Pembelian Cat: %s\n", tanggal);
            fflush(stdin);
            printf("Harga Normal Cat Dulux Per Kaleng : %d\n", dulux);
            printf("Harga Diskon Per Kaleng Cat Dulux : %d\n", harga_dulux);
            printf("Luas Dinding Yang Di Cat : %f m2\n", luas);

            total=jumlah_kaleng*harga_dulux;

            printf("\nCAT DULUX\n");
            printf("Jumlah Kaleng     Merk Cat     Total Harga");
            printf("%d              : Dulux        : Rp. %d \n", jumlah_kaleng, total);
            break;
        case 2:
            if(jumlah_kaleng<=25 && jumlah_kaleng>=1)
            {
                harga_catylac=23500;
            }
            else if(jumlah_kaleng<=50 && jumlah_kaleng>=26)
            {
                harga_catylac=22500;
            }
            else
            {
                harga_catylac=21000;
            }
            printf("Nama Konsumen    : %s\n", nama);
            printf("Tanggal Pembelian   : %s\n", tanggal); fflush(stdin);
            printf("Harga Normal Cat Catylac Per Kaleng : Rp %d\n", catylac);
            printf("Harga Diskon Per Kaleng Sesuai Kondisi : Rp %d\n", harga_catylac);
            printf("Luas Dinding Yang Di Cat  : %.1f m2\n", luas);

            total=jumlah_kaleng*harga_catylac;

            printf("\nCAT CATYLAC\n");
            printf(" Jumlah Kaleng     Merk Cat     Total Harga\n");
            printf("       0       : Dulux        : Rp. 0 \n");
            printf("       %d      : Catylac      : Rp. %d \n", jumlah_kaleng, total);
        case 3:
            if(jumlah_kaleng<=25 && jumlah_kaleng>=1)
            {
                harga_nippon=23500;
            }
            else if(jumlah_kaleng<=50 && jumlah_kaleng<=26)
            {
                harga_nippon=22000;
            }
            else
            {
                harga_nippon=20500;
            }
            printf("Nama Konsumen     : %s\n", nama);
            printf("Tanggal Pembelian    : %s\n", tanggal); fflush(stdin);
            printf("Harga Normal Cat Nippon Paint Per Kaleng : Rp %d\n", nippon);
            printf("Harga Diskon Per Kaleng Sesuai Kondisi  : Rp %d\n", harga_nippon);
            printf("Luas Dinding Yang Di Cat   : %.1f m2\n", luas);

            total=jumlah_kaleng*harga_nippon;

            printf("\nCAT NIPPON PAINT\n");
            printf(" Jumlah Kaleng     Merk Cat     Total Harga\n");
            printf("       %d      : Nippon Paint : Rp. %d \n", jumlah_kaleng, total);
            break;
        case 4:
            if(jumlah_kaleng<=25 && jumlah_kaleng>=1)
            {
                harga_vitex=20000;
            }
            else if(jumlah_kaleng<=50 && jumlah_kaleng>=26)
            {
                harga_vitex=19000;
            }
            else
            {
                harga_vitex=17500;
            }
            printf("Nama Konsumen    : %s\n", nama);
            printf("Tanggal Pembelian   : %s\n", tanggal); fflush(stdin);
            printf("Harga Normal Cat Avitex Per Kaleng : Rp %d\n", avitex);
            printf("Harga Diskon Per Kaleng Sesuai Kondisi : Rp %d\n", harga_vitex);
            printf("Luas Dinding Yang Di Cat  : %f m2\n", luas);

            total=jumlah_kaleng*harga_vitex;

            printf("\nCAT AVITEX\n");
            printf(" Jumlah Kaleng    Merk Cat    Total Harga\n    \n");
            printf("       %d      : Avitex       : Rp. %d \n", jumlah_kaleng, total);
            break;
            case 5:
            if(jumlah_kaleng<=25 && jumlah_kaleng>=1)
            {
                harga_mowilex=18500;
            }
            else if(jumlah_kaleng<=50 && jumlah_kaleng>=26)
            {
                harga_mowilex=17000;
            }
            else
            {
                harga_mowilex=16000;
            }
            printf("Nama Konsumen    : %s\n", nama);
            printf("Tanggal Pembelian   : %s\n", tanggal); fflush(stdin);
            printf("Harga Normal Cat Mowilex Per Kaleng : Rp %d\n", mowilex);
            printf("Harga Diskon Per Kaleng Sesuai Kondisi : Rp %d\n", harga_mowilex);
            printf("Luas Dinding Yang Di Cat  : %.1f m2\n", luas);

            total=jumlah_kaleng*harga_mowilex;

            printf("\nCAT MOWILEX\n");
            printf(" Jumlah Kaleng    Merk Cat    Total Harga\n    \n");
            printf("       %d       : Mowilex      : Rp. %d \n", jumlah_kaleng, total);
            break;
            default:
            printf("\nCode %d Tidak Terdaftar pada produk kami.\n", code);
            printf("Silakaan Ulangi Kembali Penginputan Code Anda");
            break;
            }

    return 0;
}
