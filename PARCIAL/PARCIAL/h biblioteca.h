#ifndef H_BIBLIOTECA_H_INCLUDED
#define H_BIBLIOTECA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1


typedef struct
{
    int pelicula;
    float codigoDePelicula;
    char actorPrincipal[50];
    char nombreDePelicula[50];
    char genero[13];
    char fechaDeEstreno[50];
}ePelicula;


ePelicula mostrarCartelera();

void inicializarCartelera(ePelicula[],int);

void mostrarCartelera(ePelicula);

void cargarArray(ePelicula[], int);

void mostrarArray(ePelicula[], int);

void construirArray(ePelicula[], int);

int insertarPelicula(ePelicula [], int );

/*int dameLugarLibre(ePelicula[],int);

int existePelicula(ePelicula,ePelicula[]);

int borrarProducto(ePelicula[], int);*/

int editarPelicula(ePelicula [], int );
#endif // H_BIBLIOTECA_H_INCLUDED
