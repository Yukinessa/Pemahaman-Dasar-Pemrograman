#include <stdio.h>
#include <stdlib.h>
/*
    ("Nama : Kun Amrin Amanu"\n);
    ("NIM : A11.2017.10333"\n);
    ("Materi : Perkenalan type data"\n);
    ("Pemahaman 2. senin, 2/10/17");
*/

/* Luas Segitiga */
 int main()
{
    float alas,tinggi,panjang,lebar,luas_segitiga;
    int sisi,keliling_segitiga;

    printf("===================== Luas segitiga =========================\n\n");
    printf("Masukan Alas = ");
    scanf(" %f",&alas);
    printf("Masukan Tinggi = ");
    scanf("%f",&tinggi);
    luas_segitiga = 0.5*alas*tinggi;

    printf("Alasnya adalah =  %.f\n", alas);
    printf("Tingginya adalah =  %.f\n", tinggi);
    printf("Rumus dari luas segitiga adalah = 0.5 x Alas x Tinggi\n");
    printf("Maka Luas segitiganya adalah = %.2f \n\n", luas_segitiga);
    printf("==============================================================\n\n");

    printf("============================keliling segitig===================================\n\n");
    printf("Masukan Sisi = ");
    scanf("%d",&sisi);
    keliling_segitiga = sisi+sisi+sisi;

    printf("Sisinya adalah =%d \n", sisi);
    printf("Rumus Keliling segitiga adalah Sisi x 3\n");
    printf("Maka Keliling Segitiganya adalah = %d\n", keliling_segitiga);



    return 0;
}
