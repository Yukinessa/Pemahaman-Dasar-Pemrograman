#include<stdio.h>
/*
Nama    : Kun Amrin Amanu
NIM     : A11.2017.10333
nloop18
*/
int main(){

	int lebar=5;
	int a,b,c;
	for(a=0;a<=lebar;a++)
	{
		for(b=0;b<=a;b++)
		{
            printf(" ");
		}
		for(c=lebar;c>=a;c--)
		{
            printf("*");
		}
		printf("\n");
	}
	return 0;
}
