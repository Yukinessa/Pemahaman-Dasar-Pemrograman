#include<stdio.h>
/*
Nama    : Kun Amrin Amanu
NIM     : A11.2017.10333
nloop15
*/
int main(){

	int lebar;
	int a,b;
	printf("lebar segitiga : ");
	scanf("%d",&lebar);
	for(a=0;a<=lebar;a++)
	{
		for(b=0;b<=a;b++)
		{
            printf("*");
		}
		printf("\n");
	}
	return 0;
}
