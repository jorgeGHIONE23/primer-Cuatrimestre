#include <stdio.h>
#include <stdlib.h>

void saludar(void);
int dameNumero(void);
float sacarPromedio(int suma,int cantidad);
void esPrimo(int numero);
int main()
{
    int edad;
    int contador;
    int numero;
    int suma;
    float altura;
    int limite;
    saludar();
    /*altura= 82.5;
    edad=66;
    printf(" ingrese su edad: ");
    scanf("%d",&edad);
    printf(" ingrese su altura:");
    scanf("%f",& altura);

    printf("  Hello world!\n");
    printf(" jorge\t ghione \n");
    printf(" su edad es: %d", edad);
    printf(" su altura es :%f", altura);*/

    //ingresar 5 numeros y devolver el promedio de las mismas


    contador=0;
    suma=0;
    float promedio;
    limite= dameNumero();
    while(contador<limite )
    {
        //5 4 4 4 4
        printf(" \n ingrese su numero: ");
        scanf("%d",&numero);

        suma = suma + numero;
        contador ++;


    }
        promedio = (float)suma/contador;
        printf("el promedio es :%f",promedio);

  return 0;

}
void saludar(void)
{

    printf("hola mundo C");

}
int dameNumero(void)

{
    int cantidad;
    printf("ingrese la cantidad de iteraciones: ");
    scanf("%d",&cantidad);

    return cantidad;
}
float sacarPromedio(int suma,int cantidad)
{
    float promedio;
    promedio = (float)suma/cantidad;
    return promedio;
}
