#include <stdio.h>
#include <stdlib.h>

/* contoh membaca integer dan float*/
/* kemudian menuliskan nilai yang dibaca */

int main ()
{
/* Kamus */

int a;
float b;
char G;
char D[30];

/* Program */


printf ("Membaca dan menulis, ketik nilai integer: "); scanf ("%d", &a);
printf ("Nilai yang dibaca : %d\n", a);
printf ("Membaca dan menulis, ketik nilai float: "); scanf ("%f", &b);
printf ("Nilai yang dibaca : %f\n",b);
fflush(stdin);
printf ("Membaca dan menulis, ketik karakter: "); scanf (" %c", &G);
printf ("Karakter yang dibaca : %c \n", G);
printf ("Membaca dan menulis, ketik kata: "); scanf  ("%s",&D);
printf ("Kata yang dibaca : %s",D);

return 0;

}


