#include <stdio.h>
#include <stdlib.h>
/*
NAMA = KUM AMRIN AMANU
NIM  = A11.2017.10333
PDP11 VII
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
    int sum0=0, sum1=0, sum2=0, sum3=0, sum4 =0;
    int sumk0=0, sumk1=0, sumk2=0, sumk3=0, sumk4 =0;

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
            if(baris<1)
            {
                sum0+=array2d[baris][kolom];
            }
            else if(baris<2)
            {
                sum1+=array2d[baris][kolom];
            }
            else if(baris<3)
            {
                sum2+=array2d[baris][kolom];
            }
            else if(baris<4)
            {
                sum3+=array2d[baris][kolom];
            }
            else if(baris<5)
            {
                sum4+=array2d[baris][kolom];
            }
        }
        for(kolom=0;kolom<1;kolom++)
        {
            sumk0+=array2d[baris][kolom];
        }
        for(kolom=1;kolom<2;kolom++)
        {
            sumk1+=array2d[baris][kolom];
        }
        for(kolom=2;kolom<3;kolom++)
        {
            sumk2+=array2d[baris][kolom];
        }
        for(kolom=3;kolom<4;kolom++)
        {
            sumk3+=array2d[baris][kolom];
        }
        for(kolom=4;kolom<5;kolom++)
        {
            sumk4+=array2d[baris][kolom];
        }
    }
    printf("\n\nJumlah baris pertama = %d", sum0);
    printf("\n\nJumlah baris kedua = %d", sum1);
    printf("\n\nJumlah baris ketiga = %d", sum2);
    printf("\n\nJumlah baris keempat = %d", sum3);
    printf("\n\nJumlah baris kelima = %d", sum4);
    printf("\n\nJumlah kolom pertama = %d", sumk0);
    printf("\n\nJumlah kolom kedua = %d", sumk1);
    printf("\n\nJumlah kolom ketiga = %d", sumk2);
    printf("\n\nJumlah kolom keempat = %d", sumk3);
    printf("\n\nJumlah kolom kelima = %d", sumk4);

    return 0;
}
