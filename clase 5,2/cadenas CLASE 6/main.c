
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int largo;
    char nombre[6]="Martin";
    char otroNombre[50]="Jose Perez";
    int compara;

    strupr(otroNombre);

    strcat(nombre, otroNombre);
    //strlwr para todo minuscula
    printf("Su nombre es: %s",nombre);

    //strncpy(nombre, otroNombre,5);
    //strcpy(nombre, otroNombre);
    scanf("%[^\n]", nombre);
    //printf("%d--%d\n\n",nombre, &nombre);
    //printf("ingrese su nombre: ");
    // FORMAS DE MOSTRAR CARACTERES
    //scanf("%[^\n]", nombre);
    //largo=strlen(nombre);
    //gets(nombre);
    //fgets(nombre, 50, stdin);
   // scanf("%s", nombre);
    //printf(" %d",largo );
    //compara=stricmp(nombre, "pepe"); //stricmp ignora las mayusculas y devuelve 0 con el ejemplo pepe PEPE
    //printf("%d", compara);
    /*if(nombre== "pepe")
    {
        printf("Ud se llama pepe");
    }*/

    return 0;
}
