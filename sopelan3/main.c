#include <stdio.h>
#include <stdlib.h>
#include "bibloteca.h"
int EsUnNumero(char *cadena)
{
     int indice=0;
      int retorno=0;
   // printf("\npalabra por parametros %s" , cadena);

    while(cadena[indice]!='\0')
    {
    if(cadena[indice]<'0'|| cadena[indice]>'9')
    {
            break;
        }else{
        indice ++;
        }
    }
    if(cadena[indice]!='\0')
    {
        retorno=1;
    }
    return retorno;
}
int main()
{
    char letra;
    char palabra[10];
    int numero;
    int es;

    scanf("%s", & palabra);
    fflush(stdin);
    printf("\npalabra ingresada %s" , palabra);

       es=EsUnNumero(palabra);
       if(es==1)
       {
           printf("es correcto");
       }else{
           printf("no lo es");
       }
}

    /*int indice=0;
    while(indice<20)
    {
    if(palabra[indice]=='\0')
    {
        printf("el barra cero esta %d",indice);
    }
    printf("\npalabra %c" , palabra[indice]);
    indice ++;
    }
    return 0;

    /*scandf("%d", & numero);
    fflush(stdin);
    printf("\n numero %d" , numero);
    scanf("%d",&letra);
    printf("\nletra %d", letra);
    fflush(stdin);
    scanf("%c",&letra);
    printf("\nletra %c", letra);
    fflush(stdin);
    scanf("%s",&letra);
    printf("\nletra %s", letra);
    fflush(stdin);*/

    /*int edad;
    int retorno=0;
    do{
        printf("ingrese una edad: ");
        retorno=scanf("%d",&edad);
        fflush(stdin);
    }while(retorno==0);


    printf("la respuesta es : %d", retorno);
    printf("la edad es : %d", edad);*/
    /*int dato;
    dato=dividir(6);
    printf("el dato es :%d",dato);
    dato=dividir(0);
    printf("el dato es :%d",dato);*/
    /*int unfactorial;
    unfactorial=factorial(5);
    printf("la factorial es : %d", unfactorial);*/
    /*int midato=333;
    cambiarvalor(midato);
    printf("mi dato es : %d",midato);
    cambiarValorReferencia(&midato);
    printf("mi dato es : %d",midato);
    return 0;*/


