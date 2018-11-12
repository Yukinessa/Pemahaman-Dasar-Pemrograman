#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[20];
    char tanggal[20];
    char lamanya[20];
    int pilihan;
    printf("Masukan Nama anda = ");
    fflush(stdin);
    gets(nama);
    printf("Masukan Tanggal Anda Periksa = ");
    fflush(stdin);
    gets(tanggal);
    printf("Berapa hari batuk anda = ");
    fflush(stdin);
    gets(lamanya);
    printf("Tolong deskripsikan batuk anda dengan angka dibawah ini");
    printf("\n 1. Batuk Biasa");
    printf("\n 2. Batuk Berdahak");
    printf("\n Jadi batuk seperti apa yang anda rasakan = ",pilihan);
    scanf("%d",&pilihan);
        if (pilihan<2 && pilihan>0)
        {
            printf("\n - Anda Memerlukan obat batuk yang biasa dan meminumnya 2x sehari");
            printf("\n - Anda akan segera sembuh apabila anda meminum obat dengan teratur dan istirahat yang cukup");
            printf("\n - Rekomendasi dari kami adalah obat OBH yang biasa");
        }
        else
        {
            printf(" - Anda memerlukan obat batuk khusus seperti obat batuk berdahak dan meminum 2x sehari");
            printf(" - Anda akan segera sembuh bila anda meminum obat secara teratur dan beristirahat yang cukup");
            printf(" - Rekomendasi dari kami adalah obat OBH special yang berdahak");
        }
    return 0;
}
