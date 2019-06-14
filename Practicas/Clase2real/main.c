/******************************************************************
* Programa: Ejemplo Clase 2
*
* Objetivo:
*   -Realizar un programa que solicite cinco n�meros e imprima por pantalla el
*    promedio, el m�ximo y el m�nimo.
*
* Aspectos a destacar:
*   -El uso de bucles para pedir un n�mero tras otro
*   -El uso de acumuladores, se tiene que guardar la suma para luego hacer
*    el promedio
*   -El uso del if para preguntar si el numero ingresado es mayor o menor
*    para guardar los m�ximos y m�nimos
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio D�vila
* Revisi�n: Ernesto Gigliotti
*
* *******************************************************************/

#include <stdio.h>
#include <stdlib.h>


/*int main()
{
    int maximo;
    int minimo;
    int acumulador;
    int auxiliarInt;
    int i;

    // Solicito el primer n�mero el cual por ser el primero sera tanto el
    // maximo como el minimo y el primer numero a ser acumulado
    printf("Ingrese un numero: ");
    scanf("%d",&auxiliarInt);
    maximo = auxiliarInt;
    minimo = auxiliarInt;
    acumulador = auxiliarInt;

    // Solicito el resto de los numeros
    for(i=0;i<4;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&auxiliarInt);
        acumulador = acumulador + auxiliarInt;

        if(auxiliarInt > maximo)
        {
            maximo = auxiliarInt;
        }

        if(auxiliarInt < minimo)
        {
            minimo = auxiliarInt;
        }
    }

    printf("El maximo es: %i\n",maximo);
    printf("El minimo es: %i\n",minimo);
    printf("El promedio es: %i\n",acumulador / 5);
    return 0;

}*/
int main ()
{
    int numMaximo;
    int numMinimo;
    int acumulador;
    int auxiliarInt;
    int i;

    printf("ingrese un numero: ");
    scanf("%d",& auxiliarInt);

    numMaximo = auxiliarInt;

    numMinimo = auxiliarInt;

    acumulador = auxiliarInt;

    for(i=0; i<4; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d",& auxiliarInt);
        acumulador = acumulador + auxiliarInt;

        if(auxiliarInt> numMaximo)
        {
            numMaximo=auxiliarInt;
        }
        if(auxiliarInt<numMinimo)
        {
            numMinimo=auxiliarInt;
        }

    }
        printf("el numero maximo es: %i\n",numMaximo);
        printf("el numero minimo es: %i\n",numMinimo);
        printf("el promedio es: %i",acumulador/5);



    return 0;
}
