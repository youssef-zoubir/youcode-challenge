#include<stdio.h>

int main(){
   
int z[10];
int i;
int min , max ;
printf("entrer les 10 num : \n");
for (i=0 ; i<= 10 ; i++){

   printf("z[%d]= ",i );
   scanf("%d",&z[i]);  

}
  min = z[0];
  for(i=0;i<=10;i++){
  
  if (min >z[i])
    min = z[i];
  printf("le min num est : %d \n",min);
     }

   max =z[0];
   for ( i = 0; i <= 10; i++)
   {
      if (max < z[i])
        max = z[i];

        printf("le max num est : %d", max);
   }
   

return 0;




}