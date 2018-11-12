#include<stdio.h>
#include<stdlib.h>
/*
Nama    : Kun Amrin Amanu
NIM     : A11.2017.10333
nloop19
*/
int main(){

	int jumlah,i,j,k,z,spasi,white,panjang,lebar,lebartrapesium;

	printf("masukkan besar roket (Maksimal angka 4):");
	scanf("%d",&jumlah);

	printf("\n");
	spasi=jumlah/2;
	for(i=1;i<=jumlah;i++){
		for(z=1;z<=spasi;z++){

			printf(" ");
		}
		for(j=i;j<=jumlah;j++){
			printf(" ");
		}

		for(k=1;k<=i;k++){
			printf("x ");
		}

	printf("\n");
	}

	lebar=jumlah;

	for(z=1;z<=spasi;z++){

		printf(" ");
	}
	for(i=0;i<=lebar;i++){
		printf("x ");
	}
	printf("\n");
	panjang=jumlah*3;
	for(i=0;i<=panjang;i++){

		for(z=1;z<=spasi;z++){

			printf(" ");
		}

		white=jumlah;
		for(j=0;j<=white;j++){
			printf("x ");

		}
		printf("\n");
	}

	for(i=jumlah-3;i<=jumlah;i++){
		for(z=1;z<=spasi;z++){

			printf(" ");
		}
		for(j=i;j<=jumlah;j++){
			printf(" ");
		}

		for(k=1;k<=i;k++){
			printf("x ");
		}

	printf("\n");
	}


	return 0;
}
