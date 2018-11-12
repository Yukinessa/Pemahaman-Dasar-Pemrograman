#include <stdio.h>
#include <stdlib.h>
/* NAMA = Kun Amrin Amanu
    NIM = A11.2017.10333
    PDP5 soal1
*/
int main()
{
    char nama[30];
    char namaortu[25];
    char pekerjaan[20];
    char pekerjaanibu[20];
    char nim[20];
    char alamat[30];
    int smst,gaji;
    float ipk;

    printf("Masukan nama anda = ");
    fflush(stdin);
    gets(nama);
    printf("Masukan NIM anda = ");
    fflush(stdin);
    gets(nim);
    printf("Masukan alamat anda = ");
    fflush(stdin);
    gets(alamat);
    printf("Masukan IPK anda = ");
    scanf("%f",&ipk);
    printf("Semester yang sedang anda tempuh = ");
    scanf("%d",&smst);
    printf("Nama ayah anda = ");
    gets(namaortu);gets(namaortu);
    printf("Pekerjaan ayah anda = ");
    fflush(stdin);
    gets(pekerjaan);
    printf("Pekerjaan ibu anda = ");
    fflush(stdin);
    gets(pekerjaanibu);
    printf("Gaji orang tua per bulan = ");
    scanf("%d",&gaji);
    if (ipk>=3.00 && smst>=5 && gaji>=3000000)
        {
            printf("Selamat, Anda Berhak Menerima Beasiswa");
        }
    else if (ipk<=3.00)
        {
            printf("Maaf anda belum diterima");
        }
    else
        {
            printf("Maaf anda belum diterima");
        }

    return 0;
}
