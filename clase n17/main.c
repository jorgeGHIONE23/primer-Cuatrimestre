#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[50];
    float edad;
}ePersona;



int damePersona(ePersona* ePersona)
{
    printf("ingrese una persona");
    scanf("%f",&ePersona);
    return 0;
}
