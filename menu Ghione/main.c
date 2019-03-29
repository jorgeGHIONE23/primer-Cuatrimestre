#include <stdio.h>
#include <stdlib.h>
int pedirOpcionMenu(char[]);
int main()
{
    int opcion;
    char seguir= 's';
    do
    {
        opcion = pedirOpcionMenu("1. alta\n 2. baja\n 3. modiificaciones\n 4. informes\n 5. salir\n elija una opcion:");

        switch(opcion)
        {
        case 1:
            printf("estoy dando de alta\n");
        break;
        case 2:
            printf("estoy dando de baja\n");
        break;
         case 3:
             printf("estoy modificando\n");
        break;
         case 4:
             printf("estoy informando\n");
        break;
         case 5:
             seguir = 'n';
             break;
         default:
            printf("opcion incorrecta, reingresar");
            break;

        }
    system("pause");
    system("cls");
    }while(seguir=='s');
    return 0;
}
int pedirOpcionMenu(char texto[])
    {
    int opcion;

     printf("%s", texto);

        scanf("%d",& opcion);

    return opcion;

    }
