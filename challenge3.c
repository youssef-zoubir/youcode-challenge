#include <stdio.h>

int main(){


   int a;
   int b;
   int somme;
   int  less;
   int multipe;
   int devision;

   printf("donne a : ");
   scanf("%d",&a);

   printf("donne b: ");
   scanf("%d",&b);

   somme= a+b;
   less= a-b;
   multipe= a*b;
   devision= a/b;


   printf("la somme est : %d\n",somme);
   printf("less est: %d\n",less);
   printf("multipe est: %d\n",multipe);
   printf("devision est: %d\n",devision);

   return 0;
}
