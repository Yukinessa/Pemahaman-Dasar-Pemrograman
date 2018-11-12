#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    Nama = Kun Amrin Amanu
    NIM  = A11.2017.10333
    PDP6 soal3
*/
int main()
{
    float a,b,c,luas,keliling,phytagorasb,phytagorasa;

    printf("============ Aplikasi Penganalisa dan Penghitung Luas Segitiga =================\n\n");
    printf("Masukan Sisi A = ");
    scanf("%f",&a);
    printf("Masukan Sisi B = ");
    scanf("%f",&b);
    printf("Masukan sisi C = ");
    scanf("%f",&c);

    if (a==b && b==c)
        {
        printf("Berdasarkan sisi yang anda inputkan, segitiga tersebut adalah Segitiga Sama Sisi");
        luas=0.25*a*a;
        keliling=a+b+c;
        printf("Luasnya adalah = %0.2f√3",luas);
        printf("\nKelilingnya adalah = %0.2f",keliling);
        }
    else if (a==b || b==c || c==a)
        {
        printf("Berdasarkan sisi yang anda inputkan, segitiga tersebut adalah segitiga sama kaki");
        phytagorasb=c*c-a*a;
        phytagorasa=c*c-b*b;
        luas=0.5*phytagorasb*phytagorasa;
        keliling=a+b+c;
        printf("Luasnya adalah = %0.2f",luas);
        printf("\nKelilingnya adalah = %0.2f",keliling);
        }
    else if (a!=b && b!=c)
        {
        printf("Berdasarkan sisi yang anda inputkan, segitiga tersebut adalah segitiga sembarang");
        phytagorasb=c*c-a*a;
        phytagorasa=c*c-b*b;
        luas=0.5*phytagorasb*phytagorasa;
        keliling=a+b+c;
        printf("Luasnya adalah = %0.2f",luas);
        printf("\nKelilingnya adalah = %0.2f",keliling);
        }
    else
        {
        printf("Sisi Yang anda inputkan tydac valid");
        }
    return 0;
}
