#include <stdio.h>
#include <stdlib.h>
/*
NAMA	:KUN AMRIN AMANU
NIM	:A11.2017.10333
array4.c
*/
int main()
{
    float a[20],cari;
    int x,z;
    char y[10];
    printf("Jumlah Input : ");
    scanf("%d",&x);
    for (z=0; z<x; z++)
    {
        printf("Input Ke-%d : ",z);
        scanf("%f",&a[z]);
    }
    printf("\n");
    printf("Masukkan Angka Yang Dicar : ");
    scanf("%f",&cari);
    printf("\nApakah anda ingin memasukan lagi <y/t> = ");
    scanf("%s",&y);
    if(y =='y')
    {
        system("cls");
        main();
    }
    else
    for (z=0; z<=x; z++)
    {
        if (cari==a[z])
        {
            printf("Data %.2f Terletak Pada Indeks Ke : %d\n",cari,z);
        }
    }

    return 0;
}
