#include<stdio.h>

int main(){
   
int z[10];
int i;
int min , max ;
printf("entrer les 10 num : \n");
for (i=1 ; i<= 10 ; i++){

   printf("z[%d]= ",i );
   scanf("%d",&z[i]);  

}
  max = z[0];
  min = z[0];
  for(i=1;i<10;i++){
  
  if (min >z[i])
    min = z[i];
 
     }
   {
      if (max < z[i])
        max = z[i];
     }
        printf("le max num est : %d\n", max);
        printf("le min est : %d ", min);
   

return 0;




}