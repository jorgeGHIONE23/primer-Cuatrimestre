#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct
{
    char codigoDeBarra[13];
    float precio;
    char nombre[50];
    char fechaVencimiento[50];
    char proveedor[50];
    char estado=0;


} eProducto;

#endif // PRODUCTO_H_INCLUDED

eProducto pedirProducto();
void mostrarProducto(eProducto);
void cargarArray (int, eProducto[]);
void mostrarArray(int tam, eProducto listado[]);
void construirArray(eProducto  lsitado[], int tam)
