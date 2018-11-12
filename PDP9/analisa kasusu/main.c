#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
Analisa Kasus
*/
int main()
{
    int jawab, i, lagi, Benar;

    for(i = 1; i < 11; i++)
        {
            printf(" %d + %d = ?", i , i);scanf("%d", &jawab);
                if(jawab == i + i)
                {
                    printf("Benar!\n");
                }
                else
                {
                    printf("Salah.\n");
                    printf("Coba Lagi.\n");
                    Benar = 0;
                }
    for(lagi = 0; lagi < 3 && !Benar; lagi++)
    {
        printf(" %d + %d = ? ", i, i);scanf("%d", &jawab);
                if(jawab == i + i)
                {
                    printf("Benar!\n");
                    Benar = 1;
                }
    }
        if(!Benar)
        {
            printf("Jawabnya adalah %d.\n", i + i);
        }
    }

    return 0;
}
