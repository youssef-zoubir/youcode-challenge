#include <stdio.h>
#include<math.h>

int main()
{
  int circonférence;
  int r;

  printf("donne r: ");
  scanf("%d",&r);

  circonférence = 2 * 3.14 * r ;

  printf("circonférence est : %d",circonférence);

  return 0;
}