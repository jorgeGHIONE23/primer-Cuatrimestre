#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*int valor = 99;
   int* p;
   int* q;

   p= &valor;

   q = p;
   printf("%d", *q);*/
   int variable[5]={5,9,7,8,1};
   int* puntero;
   int i;


   puntero= variable;

   for (i=0; i<5; i++)
   {
       printf("%d\n", *(puntero+i));/*variable[i]*/
   }


    return 0;
}
