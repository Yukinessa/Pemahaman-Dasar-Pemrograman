#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ipk,tempuh;
    float gaji;
    char almt[255];
    char ibu[100];
    char nama[30];
    char ortu[30];
    char tua[30];
    char nim[30];

    printf("=======================================\n");
    printf("\tSeleksi Beasiswa Semarang\n");
    printf("=======================================\n");
    printf("Nama : ");
    fflush(stdin);
    gets(nama);
    printf("Nim : ");
    fflush(stdin);
    gets(nim);
    printf("Alamat : ");
    fflush(stdin);
    gets(almt);
    printf("IPK : ");
    scanf("%d",&ipk);
    printf("Semester yang sedang di tempuh : ");
    scanf("%d",&tempuh);
    printf("Nama Orang Tua : ");
    gets(ortu);gets(ortu);
    printf("Pekerjaan Orang Tua : ");
    fflush(stdin);
    gets(tua);
    printf("Pekerjaan Ibu : ");
    fflush(stdin);
    gets(ibu);
    printf("Gaji Orang Tua Perbulan : ");
    scanf("%f",&gaji);

    if(ipk > 3.00){
        if(semester < 5 && ortu < 3000000){
            printf("Selamat,Anda berhak menerima beasiswa");
        else if(ipk < 3.00){
            printf("Maaf Anda Belum di terima")
            }
            }
    }







    return 0;
}
