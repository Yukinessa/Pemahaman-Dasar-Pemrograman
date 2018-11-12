#include <stdio.h>
#include <stdlib.h>
/*
    NAMA = Kun Amrin Amanu
    NIM = A11.2017.10333
    PDP6 soal 2
*/
int main()
{
    int code;

    printf("Enter Code 1 - 127 = ");
    scanf("%d",&code);
    printf("nilai code = %d \n",code);

    if (code>=0 && code<=127)
    {
        if(code==65||code==69||code==73||code==79||code==85||code==97||code==101||code==105||code==111||code==117)
        {
            printf("Your input is a vocal");
        }
        else if(code>=97 && code<=122 || code>=65 && code<=90)
        {
            printf("Your Input is Consonant");
        }
        else if(code>=48 && code<=57)
        {
            printf("Your input is Number ASCII code");
        }
        else if(code>=0 && code<=31 || code==127)
        {
            printf("Your Input is ASCII control characters");
        }
    }
    else if (code<0)
    {
        printf("Your input is not valid, please enter more than 0");
    }
    else if (code>127)
    {
        printf("Your input is not valid, please enter less than 128");
    }
    else
    {
        printf("Your Input is Character");
    }
    return 0;
}
