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

int Celcius;
float CeltoFah;
int CeltoKel;
float CeltoRea;
printf("Masukkan Jumlah Celcius\t: ");
scanf("%d",&Celcius);

/* Program */
CeltoFah=1.8*Celcius + 32;
CeltoKel=273+Celcius;
CeltoRea=0.8*Celcius;
printf("Dalam Skala Celcius menunjukkan: %d \n",Celcius);
printf("Bila dikonversi menjadi Fahrenheit menjadi\t: %f\n",CeltoFah);
printf("Bila dikonversi menjadi Reamur menjadi\t: %d\n",CeltoKel);
printf("Bila dikonversi menjadi Kelvin menjadi\t: %f\n",CeltoRea);
return 0;
}
