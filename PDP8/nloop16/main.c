#include<stdio.h>
/*
Nama    : Kun Amrin Amanu
NIM     : A11.2017.10333
nloop16
*/
int main(){

	int q,w,e;

	for(q=1;q<=5;q++)
	{
        for(w=q;w<=5;w++)
        {
            printf(" ");
        }
        for(e=1;e<=q;e++)
        {
            printf("*");
        }
        printf("\n");
	}
	return 0;
}
