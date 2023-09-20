#include<stdio.h>

int max();
int min();
int main(){
   

   printf("saisir la valeur de tableau: ");
   
   max();
   min();
  return 0;
}

int max(){
  int  t[5]= {5,8,6,17,19};
  int max = t[0];

  for (int i = 0; i < 5; i++)
  {
if (max < t[i]) 
{
    max = t[i];
}
 }
  printf("%d\n",max);
}


int min(){
  int  t[5]= {5,8,6,17,19};
  int min = t[0];

  for (int i = 0; i < 5; i++)
  {
if (min > t[i]) 
{
    min = t[i];
}
 }
  printf("%d",min);
}