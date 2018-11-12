#include <stdio.h>
#include <stdlib.h>
/*
Kun Amrin Amanu
A11.2017.10333
loop6
*/
int main()
{
    int a;

    for(a=0;a<=31;a++)
    {
        printf("ASCII code %d is %c \n",a,a);

    }
    a=32;
    while(a<=64){
        printf("ASCII code %d is %c \n",a,a);
        a++;
    }
    a=65;
    do
    {
        printf("ASCII code %d is %c \n",a,a);
        a++;
    }
    while(a<=127);
    return 0;
}
