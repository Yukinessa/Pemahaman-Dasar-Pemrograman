#include <stdio.h>
#include <stdlib.h>

/*
    Nama : Kun Amrin Amanu
    NIM : A11.2017.10333
    Tugas : PDP2
*/
int main()
{
    /*kamus*/
    int jam_datang,menit_datang,menit_masuk,hasil,jam_masuk,jam_telat,menit_telat,waktu_telat;

    /*program */
    printf("================Program penghitung waktu keterlambatan mahasiswa=================");
    printf("\n Waktu Jam : "); scanf("%d",&jam_datang);
    printf("\n Waktu Menit : "); scanf("%d",&menit_datang);
    printf("\n Jam masuk : "); scanf("%d",&jam_masuk);
    printf("\n Menit masuk : "); scanf("%d",&menit_masuk);

    jam_telat = (jam_datang-jam_masuk)*3600;
    menit_telat = (menit_datang - menit_masuk)*60;
    waktu_telat = jam_telat + menit_telat;

    printf("Keterlambatan anda = %d sekon", waktu_telat);

    return 0;
}
