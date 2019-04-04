#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char usuario[][10]={"Maria", "Jose" ,"Jesus" ,"melchor", "gaspar"};
   int nota[10]={8,5,2,10,3};
   int i;
   int j;

    for(i=0 ;i<5; i++)
   {

       //strcpy(usuario[0],"hola");
       printf("alumno : %s  nota %d \n" , usuario[i], nota[i]);

   }
   //ordenamineto por nota
    for(i=0 ;i<5; i++)
   {
       for(j=0; j<4;j++)
       {

            if (resultado (usuario[i],usuario[j])==-1)
           {
                //int resultado=strcmp(usuario[i],usuario[j]);
                int aux =nota[i];
                nota[i]=nota [j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString, usuario[i]);
                strcpy(usuario[i],usuario[j]);
                strcpy(usuario[j], auxString);
           }
           int resultado;
           printf("%d=> %d \n",nota[i], nota[j]);
           int resultado;
           resultado=strcmp("hola", "hola");
           printf(" \n iguales :%d", resultado);
           resultado=strcmp("Hola", "hola");
           printf(" primera :%d", resultado);
           resultado=strcmp("hola", "Hola");
           printf(" \n segunda :%d", resultado);
           resultado=strcmp("A","a");
           printf("\n la A : %d", resultado);
            resultado=strcmp("a","b");
           printf("\n la a-b : %d", resultado);
            resultado=strcmp("a","b");
           printf("\n la A : %d", resultado);
           resultado=strcmp("b","a");*/



          /*/if (resultado (usuario[i],usuario[j]);==1)
           {
                int aux =nota[i];
                nota[i]=nota [j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString, usuario[i]);
                strcpy(usuario[i],usuario[j]);
                strcpy(usuario[j], auxString);
           }*/
       }
   }
 for(i=0 ;i<5; i++)
   {

       //strcpy(usuario[0],"hola");
       printf("alumno : %s  nota %d \n" , usuario[i], nota[i]);

   }
    /*777777777 for(i=0 ;i<5; i++)
   {
       //usuar for(i=0 ;i<10; i++)
   {
       printf("ingrese usuario #%d:",i+1);
       scanf("%s", usuario[1]);
       printf("ingrese nota :",i+1);
       scanf("%s", nota[1]);io[i][0]=" ";
         strcpy(usuario[i]," ");
         //nota[1]=0;
         //nota[1] 0;
   }
   //strcpy(usuario[0],"hola");

   //printf("test %s \n", usuario[0]);
   //printf("test %s \n", usuario[1]);


    /*
      for(i=0 ;i<5; i++)
   {

       strcpy(usuario[0],"hola");
       printf("Hello %s  nota %d\n" , usuario[i], nota[i]);

   }secuencial
    for(i=0 ;i<5; i++)
   {
       printf("ingrese usuario #%d: \n ",i+1);
       scanf("%s", usuario[1]);
       //printf("ingrese nota :",i+1);
       //scanf("%s", nota[1]);
   }

   /*printf("ingrese usuario :");
   scanf("%s", usuario[0]);

   printf("ingrese usuario :");
   scanf("%s", usuario[1]);
   int tamanio = strlen (usuario[9]);
   printf("tamaño : %d \n", tamanio);
   for(i=0 ;i<10; i++)
   {
        printf("Hello %s \n" , usuario[1]);

   }

   printf("Hello %s \n" , usuario[0]);
   printf("Hello %s \n" , usuario[1]);
   printf("Hello %s \n" , usuario[2]);

*/

   return 0 ;
}

//ordenamineto por nota
   /* for(i=0 ;i<5; i++)
   {
       for(j=0; j<4;j++)
       {
           printf("%d=> %d \n",nota[i], nota[j]);
           if(nota[i]<nota[j])
           {
                int aux =nota[i];
                nota[i]=nota [j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString, usuario[i]);
                strcpy(usuario[i],usuario[j]);
                strcpy(usuario[j], auxString);
           }
       }
   }
 for(i=0 ;i<5; i++)
   {

       //strcpy(usuario[0],"hola");
       printf("alumno : %s  nota %d \n" , usuario[i], nota[i]);

   }
*/
