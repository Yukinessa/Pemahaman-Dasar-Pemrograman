#include <stdio.h>
#include <stdlib.h>
/*
Kun Amrin Amanu
A11.2017.10333
loop5
*/
int main()
{
    int a,b,c;


    for (a=3;a<=60;a+=3)
    {
        printf("%d \n",a);
        b=b+a;
        c=c+1;
    }
    printf("Jumlah = %d \nRata rata = %d",b,b/c);
    return 0;
}
