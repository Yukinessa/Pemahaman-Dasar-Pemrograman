#include <stdio.h>
#include <stdlib.h>
/*
    printf("Nama : Kun Amrin Amanu"\n);
    printf("NIM : A11.2017.10333"\n);
    printf("Materi : Perkenalan type data"\n);
    printf("Pemahaman 2. senin, 2/10/17");
*/

int main()
{
    /* kamus */
        int kaki;
        char Objek[60],Warna[10],bahan[10];

/* Analisis tipe data */
    printf("=================================Analaisis Data================================\n\n");
    printf("Masukan Objek yang ada didekat anda = ");
    scanf("%s",&Objek);
    printf("Berapa banyak kaki pada Objek yang didekat anda *bila tidak memiliki maka isi saja 0* = ");
    scanf("%d",&kaki);
    printf("Warna apa yang terdapat pada objek tersebut = ");
    scanf("%s",&Warna);
    printf("Terbuat dari apakah objek tersebut = ");
    scanf("%s",&bahan);
    printf("\n\n");

    printf("Nama dari objek yang anda sebutkan adalah = %s\n", Objek);
    printf("Memiliki warna = %s\n",Warna);
    printf("Memiliki kaki = %d\n", kaki);
    printf("Berbahan = %s\n",bahan);
    printf("\n\n");
    printf("=========================================================================\n\n");

    return 0;

}
