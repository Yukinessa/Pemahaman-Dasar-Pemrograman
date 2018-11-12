#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
triangleB
*/
int main()
{
    int a, b, c, d, e, sum, input, bts;

    sum=2; e=0; c=0; d=0;
    printf("Input batasan: "); scanf("%d", &bts);
    printf("\nOutput: \n");
    for(a=2;a<=bts*2;a+=2)
    {
        for(b=2;b<=a;b+=2)
        {
            printf("%d",a);
        }
            if(a>=4)
            {
                printf("%d",sum);
                sum+=2;
                if(a>=6)
                {
                    c+=2;
                    printf("%d",c);

                if(a>=8)
                {
                    d+=2;
                    printf("%d",d);
                    if(a>=10)
                    {
                        e+=2;
                        printf("%d",e);
                    }
                }
                }
            }
            printf("\n");
    }
    printf("\n");

    return 0;
}
