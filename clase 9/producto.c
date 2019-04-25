#include <stdio.h>
#include <stdlib.h>
#include <producto.h>
#include <string.h>

int insertProducto(eProducto,eProducto[]);
int dameLugarLibre(eProducto[]);
int existeProducto(eProducto,eProducto[]);
int borrarProducto(eProducto,eProducto[]);
int editarProducto(eProducto,eProducto[]);


void cargarArray(eProducto elProducto, eProducto listado[])
{
     int indice;
     indice=dameLugarLibre(listado);
     if(indice!=-1)
     {

         listado[indice]=elProducto;

     }
     return indice;

     int i;
     for(i=0; i<tam; i++)
     {
         //listado[i]=pedirProducto();
         mostrarProducto(listado[i]);

     }

}
void cargarArray(int tam,eProducto listado[])
{
    int i;
    for[i=0; i<tam; i++]
    {
        listado[i]=pedirProducto|);
    }

}
   eProducto pedirProducto()
    {

        eProducto   productoParaRetornar;

   printf("ingrese el codigo de barra:");
   fflush(stdin);
   gets(productoParaRetornar, nombre);

    printf("ingrese nombre:");
   fflush(stdin);
   gets(productoParaRetornar, nombre);


    printf("ingrese fecha de vencimiento:");
   fflush(stdin);
   gets(productoParaRetornar.fechaDeVencimiento);


    printf("ingrese precio:");
   fflush(stdin);
   gets("%f",&productoParaRetornar.precio);

   printf("ingrese proveedor:");
   fflush(stdin);
   gets(productoParaRetornar.proveedor);



    return productoParaRetornar;

    }
    void mostrarProducto(eProducto elParametroProducto)
    {
        printf("\n\n\n  \t\t<<<< PRODUCTOS>>>> \n");
        printf("\nAtributo \t Valor");
        printf("\n------------------------");
        printf("\nCodigo: \t %s", elParametroProducto.codigoDeBarra);
        printf("\nNombre: \t %s", elParametroProducto.nombre);
        printf("\nProveedor: \t %s",elParametroProducto.proveedor);
        printf("\nfecha venc: \t %s \n\n",elParametroProducto.fechaVencimiento);

    }


