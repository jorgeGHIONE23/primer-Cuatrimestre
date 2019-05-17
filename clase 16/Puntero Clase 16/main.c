#include <stdio.h>
#include <stdlib.h>
//declara un char y guardar un char para pedircelo al usuario
/*int main()
{
    char caracter;
    char* pCaracter;
    pCaracter = & caracter;

    printf("ingrese el char:");
    scanf("%c", pCaracter);
    printf("\n el char es : %c", caracter);


    return 0;
}*/
/** \brief permite cargar un caracter
 *
 *\param char* el char a cargar
 *\return int [0]-> si no se pudo cargar el caracter
 *            [0]->si se pudo cargar el caracter
 *
 */

int getCaracter(char*, char* mensaje, char* msjError ,);
void mostrarLetra(char*);


int main()
{
    char letra;

    int estado;

    estado= getCaracter(&letra);

    mostrarLetra(NULL);
    if(estado==1)
    {
        printf("dato cargado con exito");

    }
    else
    {
        printf("el dato no fue cargado!!!\n");
    }

    return 0;


}
int getCaracter (char* pLetra)
{
    int cargo = 0;
    if(pLetra!= NULL)
    {
        printf("ingrese una letra :");
         fflush(stdin);
        scanf("%c", pLetra);
        cargo=1;
    }
    return cargo;
}
void mostrarLetra(char* pLetra)
{
    if(pLetra!=NULL)
    {
    printf("%c", *pLetra);
    }
}
