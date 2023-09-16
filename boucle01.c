#include<stdio.h>
#include<math.h>

int main()
{
  int number;

printf("entrer un valeur :");
scanf("%d",&number);

for (int i = 1; i <= 10; i++){
    printf("%d * %d = %d \n", i,number,number*i);
    


}

return 0;
}