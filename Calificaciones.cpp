#include<stdio.h>
main()

{
int calificacion1,calificacion2,calificacion3,Promedio;

    printf("INGRESA LA CALIFICACION 1:");
    scanf("%i",&calificacion1);

    printf("INGRESA LA CALIFICACION 2:");
    scanf("%i",&calificacion2);

    printf("INGRESA LA CALIFICACION 3:");
    scanf("%i",&calificacion3);

Promedio=(calificacion1+calificacion2+calificacion3)/3;

switch(Promedio)

{
    case 7:
    printf("%i EL ALUMNO ESTA REPROBADO",Promedio);
    break;

    case 8:
        printf("%i EL ALUMNO ALCANZO UNA CALIFICACION SATISFACTORIA",Promedio);
        break;

    case 9:
        printf("%i EL ALUMNO ALCANZO UNA CALIFICACION DESTACADA",Promedio);
        break;

    case 10:
    printf("%i EL ALUMNO ALCANZO UNA CALIFICACION AUTONOMA",Promedio);
    break;

    default:
    printf("NO ALCANZO LA CALIFICACION MINIMA");
}

  }
