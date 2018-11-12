#include <stdio.h>
#include <stdlib.h>
/*
    NAMA :  KUN AMRIN AMANU
    NIM  : A11.2017.10333
    PDP3
*/
int main()
{
    float phi=3.14;
    float vol_tabung;
    float vol_kelereng;
    float sisa=0;
    float vol_tumpah=0;
    int r2=4;
    int r;
    int tinggi=12;

    vol_tabung = (phi*r2*r2*tinggi)+(phi*r2*r2*r2)/2;
    vol_kelereng = (4*phi*r*r)/3;
    sisa = vol_tabung-vol_kelereng;
    vol_tumpah = vol_tabung-sisa;

    printf("Masukan jari jari kelereng = ");
    scanf("%d",&r);
    printf("Volume kelereng = %f \n", vol_kelereng);
    printf("Volume tabung = %f\n", vol_tabung);
    printf("sisa air didalam tabung = %f \n",sisa);
    printf("volume air yang tumpah = %f \n", vol_tumpah);
    return 0;
}
