#include<stdio.h>

int main()
{
   int num;

   printf("entrer le nom :");
   scanf("%d",num);

   if (num > 0)
   {
     printf("le nombre est positif.");
   }
   else if (num < 0)
   {
    printf("le nombre est negative.");
   }
   else 
   printf(", le nombre est égal à zéro.");

   return 0;

}