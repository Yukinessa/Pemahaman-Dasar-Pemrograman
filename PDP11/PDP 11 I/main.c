#include <stdio.h>
#include <stdlib.h>
/*
NAMA = KUM AMRIN AMANU
NIM  = A11.2017.10333
PDP11 I
*/
int main()
{
    int array2d [5][5]=
    {
        {1,2,3,4,5},
        {6,7,8,9,0},
        {2,4,6,8,0},
        {1,3,5,7,9},
        {0,1,2,3,4}
    };
    int baris,kolom;

    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            printf(" (%d)",array2d[baris][kolom]);
        }
        printf("\n\n");
    }
    return 0;
}
