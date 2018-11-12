#include <stdio.h>
#include <stdlib.h>
/*
NAMA = KUM AMRIN AMANU
NIM  = A11.2017.10333
PDP11 V
*/
int main()
{
    printf("=========MATRIX 1=========\n\n");
    int array2d [5][5]=
    {
        {1,2,3,4,5},
        {6,7,8,9,0},
        {2,4,6,8,0},
        {1,3,5,7,9},
        {0,1,2,3,4}
    };
    int baris,kolom,sum=0;

    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            printf(" (%d)",array2d[baris][kolom]);
        }
        printf("\n\n");
    }
    printf("\n\n========MATRIX 2=========\n\n");
    int array2da[5][5]=
    {
        {1,4,3,1,2},
        {1,3,4,6,8},
        {4,1,5,7,8},
        {1,3,5,7,9},
        {6,1,3,4,5}
    };
    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            printf(" (%d)",array2da[baris][kolom]);
        }
        printf("\n\n");
    }
    if(array2d[baris][kolom]=array2da[baris][kolom])
    {
        printf("Element Matrix Sama");
    }
    else
    {
        printf("\n\nElement Matrix Tidak Sama");
    }
    if(array2d[baris][kolom]&&array2da[baris][kolom])
    {
        printf("\n\nUkuran Matrix sama");
    }
    else
    {
        printf("\n\nUkuran matrix tydack sama\n\n");
    }
    return 0;
}
