#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
loop3
*/
int main()
{
    int a,b,c=0,d=1, e;

    printf("Inputkan batas bilangan Fibonacci: "); scanf("%d", &e);
    for(a=0;a<e;a++)
    {
        if(a<=1)
        {
            b=a;
        }
        else
        {
            b=c + d;
            c=d;
            d=b;
        }
        printf("%d ",b);
    }

    return 0;
}
