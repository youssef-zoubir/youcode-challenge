#include <stdio.h>
#include<math.h>
int main() {

int x1,y1;
int x2,y2;
int M;
int N;
int  Distance;

printf("ajouter x1:" );
scanf("%d",&x1);

printf("ajouter y1: ");
scanf("%d",&y1);

printf("ajouter x2: ",x2);
scanf("%d",&x2);

printf("ajouter y2: ",y2);
scanf("%d",&y2);

M= x2-x1;
N= y2-y1;

Distance= sqrt(pow(M,2) + pow(N,2));

printf("donner la distance : %d\n",Distance);

return 0;


}