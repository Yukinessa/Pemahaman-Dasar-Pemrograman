#include <stdio.h>
#include <stdlib.h>
/*
Kun Amrin Amanu
A11.2017.10333
loop4
*/
int main()
{
    int a,b,c;

    printf("Masukan angka = ");
    scanf("%d",&a);
    int d[a];

    for(b=1;b<=a;b++)
    {
        printf("inputkan angka ke %d = ",b);
        scanf("%d",&c);
        d[b]=c;
    }
    printf("Inputan Anda : ");
    for(b=1;b<=a;b++){
        printf("%d ",d[b]);
    }
    return 0;
}
