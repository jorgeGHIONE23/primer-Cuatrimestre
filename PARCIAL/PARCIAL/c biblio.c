#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <biblioteca.h>

void inicializarPeliculas(ePelicula listaDePeliculas[],int tam)
{

    char codigoDePelicula[5]={55g23, 44h22 , 66f42 , 77j21 ,88k15};
    char peliculas[3][50]={"","Espacio","Turron"};
    char genero[5][50]={"accion","comedia","terror","otro"};

    char ActorPrincipal[5][50]={"julieta roberto , EEUU","Roberto deniro, EEUU","Richar darin , Argentina","tita merelo,Argentina","sandro, Argentina"};

    char fechaDeEstreno[][50]={"22/10/2020","10/05/2022","15/12/2021","10/10/2023","23/06/2024"};

    int i;

    for(i=0;i<3;i++)
    {
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].nombre,nombre[i]);
        strcpy(listaProductos[i].proveedor, proveedor[i]);
        strcpy(listaProductos[i].fechaDeVencimiento, fechaDeVencimiento[i]);
        listaProductos[i].precio=precio[i];
        listaProductos[i].estado = OCUPADO;
    }
