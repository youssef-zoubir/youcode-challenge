#include<stdio.h>
#include<math.h>

int main()
{

int ans,mois,jours,heures,minutes,secondes;

printf("veuillez la valeur  en ans :");
scanf("%d",&ans);

mois=ans * 12;
jours= ans * 365;
heures=ans*8760;
minutes=ans*525600;
secondes=ans*31536000;
printf(" ,%dmois ,%djours ,%dheures ,%dminutes,%dsecondes" ,mois ,jours ,heures ,minutes ,secondes);

return 0;


}
