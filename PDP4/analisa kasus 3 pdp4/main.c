#include <stdio.h>
#include <stdlib.h>
/* NAMA = KUN AMRIN AMANU
   NIM  = A11.2017.10333
   kelompok = A11.4018
   pdp4
*/
int main()
{
    int pilihan,harga,total,jumlah;
    char nama[20];
    char tanggal[20];
    printf("- - - -Cafe Meong - - - -\n");
    printf("\nMohon masukan nama anda = ",nama);
    fflush(stdin);
    gets(nama);
    printf("\nTanggal pembelian anda = ",tanggal);
    fflush(stdin);
    gets(tanggal);
    printf("\n\n- - - - Menu - - - -");
    printf("\n\n1. Ice Tea            = Rp. 6000");
    printf("\n2. Caramel Machiato   = Rp. 30000");
    printf("\n3. Green Tea Latte    = Rp. 25000");
    printf("\n4. Milkshake          = Rp. 15000");
    printf("\n5. Chocolate Hazelnut = RP. 25000");
    printf("\n\nMasukan menu yang ingin anda beli = ");
    scanf("%d",&pilihan);
    switch (pilihan)
        {
            case 1:
                harga = 6000;
                printf("\nAnda memesan Ice Tea");
                break;
            case 2:
                harga = 30000;
                printf("\nAnda memesan Caramel Machiato");
                break;
            case 3:
                harga = 25000;
                printf("\nAnda memesan Green Tea Latte");
                break;
            case 4:
                harga = 15000;
                printf("\nAnda memesan Milkshake");
                break;
            case 5:
                harga = 25000;
                printf("\nAnda memesan Chocolate Hazelnut");
                break;
        }
    printf("\n\nJumlah item yang ingin dibeli = ");
    scanf("%d",&jumlah);
    printf("\n- - - - Nota Pembayaran - - - -");
    printf("\nNama Pembeli = %s",nama);
    printf("\nTanggal pembelian = %s",tanggal);
    total = harga*jumlah;
    printf("\ntotal harga yang harus anda bayar = %d",total);

    return 0;
}
