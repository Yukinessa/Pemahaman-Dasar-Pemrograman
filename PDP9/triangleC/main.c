#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Nama    = Kun Amrin Amanu
NIM     = A11.2017.10333
triangleC
*/
int main()
{
    int a,b,c,blgan;

    printf("Inputkan Batas: "); scanf("%d", &blgan);
    printf("\nOutput: \n");
    c=1;
	for(a=1;a<=blgan;a++)
    {
      for(b=1;b<=a;b++)
      {
        printf("%d ",c++);
      }
      printf("\n");
    }

    printf("\n");

    return 0;
}
