#include<stdio.h>
#include<math.h>

int main(){

int a,b,c;
float x0,x1,x2;

printf("saisir a : ");
scanf("%d", &a);
printf("saisir b : ");
scanf("%d", &b);
printf("saisir c : ");
scanf("%d", &c);


float delta = (b * b) - 4 * a * c;

printf("delta = %f", delta);

if(delta>0)
printf("deux solutions distinctes .");

if(delta==0)
printf("unique solution. ");

if(delta<0)
printf("pas de solution réelle.");

return 0;

}







