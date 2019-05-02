#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "biblioteca.h"


   void inicializarProveedor(eProveedor listaProveedores[],int tam)

{
    int id[3]={1,2,3};
    char descripcion [3][50]={"petrolera","petrolera","petrolera"};
    char localidad[3] [50]={"avellaneda","bahia blanca", "rio negro"};
    int cuit[3][50]={444,555,666};
    char duenio [3][50]={"ypf", "axion","shell"};
    //float precio[3]={50,42.95,9.52};
    //char nombre[3][50]={"Agua 2Lt","Cap. Espacio","Turron"};
    //char proveedor[3][50]={"Coca-Cola","Bagley","Arcor"};
    //char codigoDeBarra[3][13]={"77951234","77959876","70"};
    //char fechaDeVencimiento[3][50]={"22/10/2020","10/05/2019","15/12/2008"};
    int i;

    for(i=0;i<3;i++)
    {
        listaProveedores[i]. id=id [i];
        strcpy(listaProveedores[i].descripcion,descripcion[i]);
        strcpy(listaProveedoresi].localidad,localidad[i]);
        strcpy(listaProveedores[i].cuit,cuit [i]);
        strcpy(listaProveedores[i].duenio,duenio [i]);
        //listaProveedores[i].precio=precio[i];
        //listaProveedores[i].estado = OCUPADO;
    }
    void inicializarProductos(eProducto lista [], int tam)
    {
        float precio[10] [50]= (42,43,44,45,46,47,48,49,50,51,52);
        char nombre[3][50]=("infinia", "axion power", "vpower", "infinia diesel", "axion diesel", "vpower diesel","super", "axion super", "normal", "kerosene" );
        char idProveedor [3][50]=("1","2","3","1","2","3", "1", "2", "3", "1" );
        char codigoDeBarra [3][50]={"111","222","333","444","555","666", "777", "888", "988", "999" };
        char fechaDeVencimiento [3][50]=("01/01/2020","01/02/2020","01/03/2020","01/04/2020","01/05/2020","01/06/2020","01/07/2020","01/08/2020","01/09/2020","01/10/2020");
    }


eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("Ingrese proveedor: ");
    fflush(stdin);
    gets(productoParaRetornar.proveedor);

    printf("Ingrese codigo de barra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese fecha de vencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio: ");
    scanf("%f", &productoParaRetornar.precio);

    productoParaRetornar.estado = OCUPADO;

    return productoParaRetornar;
}


void mostrarProducto(eProducto unProducto)
{
    printf("%15s %15s %10s %10s %10f %5d\n", unProducto.nombre, unProducto.proveedor, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.precio, unProducto.estado);
}


void cargarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i]= pedirProducto();
    }
}


void mostrarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(listado[i].estado==OCUPADO)
        {
            mostrarProducto(listado[i]);
        }


    }
}


void construirArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i].estado= LIBRE;
        listado[i].precio= 0;
        strcpy(listado[i].nombre, "");
        strcpy(listado[i].proveedor, "");
        strcpy(listado[i].codigoDeBarra, "");
        strcpy(listado[i].fechaDeVencimiento, "");
    }
}


int insertarProducto(eProducto listado[], int tam)
{
    int indice;
    indice= dameLugarLibre(listado, tam);
    if(indice != -1)
    {
        listado[indice]= pedirProducto();
    }
    return indice;
}


int dameLugarLibre(eProducto listado[], int tam)
{
    int i;
    int index = -1;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}


int existeProducto(eProducto unProducto,eProducto lista[])
{

}


int borrarProducto(eProducto lista[], int tam)
{


 int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el codigo de barras: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].codigoDeBarra, codigo)==0)
       {
          lista[i].estado = LIBRE;
            loEncontro = 1;
           break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }

    return 0;
}

void inicializarProductos(eProducto listaProductos[],int tam)
{

    float precio[3]={50,42.95,9.52};
    char nombre[3][50]={"Agua 2Lt","Cap. Espacio","Turron"};
    char proveedor[3][50]={"Coca-Cola","Bagley","Arcor"};

    char codigoDeBarra[3][13]={"77951234","77959876","70"};

    char fechaDeVencimiento[3][50]={"22/10/2020","10/05/2019","15/12/2008"};

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



}

int editarProducto(eProducto lista[], int tam)
{
   int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el codigo de barras: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].codigoDeBarra, codigo)==0)
       {
           printf("Ingrese el nuevo precio: ");
           scanf("%f", &lista[i].precio);
            loEncontro = 1;
           break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }


   return 0;
}
