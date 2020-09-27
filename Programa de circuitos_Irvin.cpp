#include <stdio.h>
int main ()
{
    float Vs;
    int R1, R2, R3, Rtotal;
    float I;

    printf ("INSERTA EL VALOR DE LA FUENTE:");
    scanf ("% f", & Vs);


printf("RESISTENCIA 1:");
scanf("%d",&R1);
printf("RESISTENCIA 2:");
scanf("%d",&R2);
printf("RESISTENCIA 3:");
scanf("%d",&R3);



printf("ESCRIBE EL VALOR DE R1, R2, R3:");
scanf("%d, %d,%d",&R1,&R2,&R3);

    Rtotal = R1 + R2 + R3;
    I=Vs/Rtotal;

    printf ("LA CORRIENTE I es% .2fA \ n", I);
    printf ("LA RESISTENCIA DEL LED 1 ES R1 (%d ohms) es% 0.2fV \ n", R1, I * R1);
    printf ("LA RESISTENCIA DEL LED 2 ES R2 (%d ohms) es% 0.2fV \ n", R2, I * R2);
    printf ("LA RESISTENCIA DEL LED 3 ES R3 (%d ohms) es% 0.2fV \ n", R3, I * R3);
return 0;


}
