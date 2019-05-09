#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <biblioteca.h>
#define T 10

int opcion;

    ePelicula unaPelicula;
    ePelicula listaDePeliculas[T];
    construirArray(listadoPeliculas,T);
    inicializarPeliculas(listadoPeliculas,T);
    mostrarArray(listadoPeliculas,T);

int opcion;

    eProducto unaPelicula;
    eProducto listaDePeliculas[T];
    construirArray(listaDePeliculas,T);
    inicializarPeliculas(listaDePeliculas,T);
    mostrarArray(listaDePeliculas,T);


     do
    {
        printf("1.ALTA\n2.MODIFICAR\n3.Mostrar\n.Elija opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
               insertarPelicula(listaDePeliculas, T);
            break;
            /*case 2:
                borrarPeliculas(listaDePeliculas,T);
                break;*/
            case 2:
                editarProducto(listaDePeliculas, T);
                break;

            case 3:
                mostrarArray(listaDePeliculas,T);
                break;
        }
    }while(opcion!=10);







    return 0;
}
