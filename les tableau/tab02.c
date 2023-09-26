#include<stdio.h>

int main(){
   
int z[10];
int i;
int  max ;
printf("entrer les 10 num : \n");
for (i=1 ; i<= 10 ; i++){

   printf("z[%d]= ",i );
   scanf("%d",&z[i]);  

}
 
 
  for(i=1;i<10;i++)
 
   {
      if (max < z[i])
        max = z[i];
     }
        printf("le max num est : %d\n", max);
       
   

return 0;




}