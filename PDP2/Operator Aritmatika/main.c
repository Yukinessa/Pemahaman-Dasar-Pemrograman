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
    /*kamus*/
    float t,vt,a;
    int v0;

    /*program*/
    printf("v0 = ");
    scanf("%d",&v0);
    printf("vt = ");
    scanf("%f",&vt);
    printf("t = ");
    scanf("%f",&t);
    a=vt/t;

    printf("Kecepatan awal = %d\n", v0);
    printf("kelajuannya = %f\n", vt);
    printf("waktunya = %f\n",t);
    printf("Maka a = %f\n",a);
    return 0;
}
