#include <stdio.h>
#include <stdlib.h>
/*
NAMA	:KUN AMRIN AMANU
NIM	:A11.2017.10333
array6.c
*/
int main()
{
    int a,b,c;
    printf("=== Bilangan Genap Terakhir ===\n");
    printf("Input Banyak Angka: ");
    scanf("%d",&a);
    int angka[a];

    b = 0;
    while(b < a)
    {
        printf("Input Angka ke %d: ",b);
        scanf("%d",&angka[b]);
        b++;
    }
    b = 0;
    c = 0;
    while(b < a)
        {
        if(angka[b] % 2 == 0 && c != 1){
            c++;
        }
        else if((angka[b] % 2 == 0) && c == 1){
            printf("Output : %d Terdapat Pada Index Ke-%d",angka[b],b);
            break;
        }
        b++;
    }
    return 0;
}
