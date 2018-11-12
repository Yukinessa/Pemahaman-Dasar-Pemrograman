#include <stdio.h>
#include <stdlib.h>
/*
NAMA	:KUN AMRIN AMANU
NIM	:A11.2017.10333
array3.c
*/

int main()
{
    float a[20];
    int x,z;
    char y;
    printf("Jumlah Input : ");
    scanf("%d",&x);
    for (z=0; z<x; z++)
    {
        printf("Input Ke-%d : ",z);
        scanf("%f",&a[z]);
    }
    printf("\n");
    printf("Output\n");
    for (z=0; z<x; z++)
    {
        printf("Data Indeks Ke-%d : [%.2f] \n",z,a[z]);
    }
    printf("\nApakah anda ingin memasukan lagi <y/t> = ");
    scanf("%s",&y);
    if(y =='y')
    {
        system("cls");
        main();
    }
    else
    return 0;
}
