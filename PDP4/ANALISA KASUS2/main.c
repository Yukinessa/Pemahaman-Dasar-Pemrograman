#include <stdio.h>
#include <stdlib.h>
/* NAMA = KUN AMRIN AMANU
   NIM  = A11.2017.10333
   kelompok = A11.4018
   pdp4
*/
int main()
{
    float tinggi,bmi,berat;

    printf("penghitung berat badan\n\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - \n\n");
    printf("Masukan tinggi badan anda = ",tinggi);
    scanf("%f",&tinggi);
    printf("Masukan berat badan anda = ",berat);
    scanf("%f",&berat);
    printf("- - - - - - - - - - - - -  - - \n");

    bmi = berat/(tinggi*tinggi);
    printf("\n BMI = %f",bmi);
    printf("\n\nSaran kami = ");

    if(bmi<18)
        {
            printf("\n\nSebaiknya mulai menambah berat badan dan mengkonsumsi makanan berkarbohidrat di imbangi dengan olah raga");
        }
    else if (bmi>=18&&bmi<=25)
        {
            printf("\n\nBagus, berat badan anda termasuk kategori ideal");
        }
    else if (bmi>=25&&bmi<=27)
        {
            printf("\n\nanda sudah masuk kategori gemuk. sebaiknya hindari makanan berlemak dan mulailah meningkatkan olahraga seminggu minimal 2 kali");
        }
    else if (bmi>=27)
        {
            printf("\n\nterlalu gemuk dan tidak baik bagi kesehatan");
        }


    return 0;
}
