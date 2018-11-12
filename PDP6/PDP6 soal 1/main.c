#include <stdio.h>
#include <stdlib.h>
/*
    Nama : Kun AMrin Amanu
    NIM : A11.2017.10333
    PDP6 soal 1
*/
int main()
{
    int angka;

    printf("Masukan Angka = ",angka);
    scanf("%d",&angka);
    if (angka>=0 && angka<=99)
        {
            printf("Angka Tersebut termasuk angka puluhan");
        }
    else if (angka>=100 && angka<=999)
        {
            printf("Angka Tersebut termasuk angka ratusan");
        }
    else if (angka>=1000 && angka<=9999)
        {
            printf("Angka tersebut termasuk angka ribuan");
        }
    else if(angka<0)
        {
            printf("Angka yang anda masukan tidak valid, masukan angka yang lebih dari 0");
        }
    else
        {
            printf("Angka yang anda masukan tidak valid");
        }
    return 0;
}
