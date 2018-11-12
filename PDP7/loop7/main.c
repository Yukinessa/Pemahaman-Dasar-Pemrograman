#include <stdio.h>
#include <stdlib.h>
/*
Kun Amrin Amanu
A11.2017.10333
loop7
*/
int main()
{
    int a,b,c;

    for(a=1;a<=100;a++)
    {
        b=a;
        while(b!=0){
            c=b%10;
            if(c==1){
                if(a>=100){
                    printf("%d",a);
                }else{
                    printf("%d-",a);
                }
            break;
            }
            b=b/10;
        }
    }
    return 0;
}
