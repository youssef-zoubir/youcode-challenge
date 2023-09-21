#include<stdio.h>
#include<stdlib.h>
   typedef  struct projet_sas
  {
    int id;
    char titre[20];
    char description[100];
    int  deadline;
    char statut[100];
  }mag;
  
   void ajouterN()
   {

    printf("entrer id :\n");
    scanf("%d",&mag.id);

    printf("entrer titre :\n");
    scanf("%s",&mag.titre);

    printf("entrer description :\n");
    scanf("%s",&mag.description); 

    printf("entrer deadline :\n");
    scanf("%d",&mag.deadline); 

    printf("entrer statut :\n");
    scanf("%s",&mag.statut); 
   }