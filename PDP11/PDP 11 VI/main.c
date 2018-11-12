#include <stdio.h>
#include <stdlib.h>
/*
NAMA = KUM AMRIN AMANU
NIM  = A11.2017.10333
PDP11 VI
*/
int main()
{
    int array2d[5][5]=
    {
        {2,4,7,7,1},
        {8,9,1,8,2},
        {5,3,6,3,1},
        {7,8,1,0,5},
        {2,1,3,4,9}
    };
    int baris,kolom,sum=0;
    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            printf("%d ",array2d[baris][kolom]);
        }
        printf("\n");
    }
    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            sum=array2d[0][0]+array2d[1][1]+array2d[2][2]+array2d[3][3]+array2d[4][4];
        }
    }
    printf("\n\nOUTPUT : %d",sum);
    return 0;
}
