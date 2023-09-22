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


















void nbr_tache(){

      int tache==0
      for ( i = 0; i < n; i++)
      {
         if ( tache[i].statut ==0 ||  tache[i].statut = 2)
         {
          
         }
         
      }
      

    }










   printf("1=Trier les tâches par ordre alphabétique. \n");
         printf("2=Trier les tâches par deadline. \n");
         printf("3=Afficher les tâches dont le deadline est dans 3 jours ou moins. \n");
         scanf("%d",&choix);





































         printf("do you want them sorted 1 or 2\n ");
      scanf("%d", &choix);

      switch (choix)
      {
      case 1:
        printf("1. Trier les tâches par ordre alphabétique.");
        scanf("%d", &i);
        if(i == 1)
        {
          struct mag temp;
          for (int i = 0; i < n - 1; i++)
            {
                  for (int j= i+1; i < n; i++)
              {
                    if (strcmp( tache[i].titre,tache[j].titre) > 0)
              {
                          temp = tache[i];
                          tache[i] = tache[j];
                          tache[j] = temp;
              }
              }
            }
          for(int i = 0 ; i < n ; i++)
        {
          printf(" id :%d\n", tache[i].id);       
          printf(" titre :%s\n", tache[i].titre);
          printf(" description : %s\n" , tache[i].description);
          printf(" deadline: %d\n", tache[i].deadline);
          printf(" statut: %s\n" , tache[i].statut); 
        }
        }
        break;
      case 2:
        return;
        break;
      default:
        break;
      }
    //   void trier_alpha(){
        
    //      printf("aficher Les lettres sont arrangées\n");
    // }
    //     trier_dedline(){
    //       for (int i = 0; i < n; i++)
    //       {
    //        for (int j = i+1; i < n; i++)
    //        {
    //          if (tache[i].deadline<tache [j].deadline)
    //          {
    //         struct  mag temp = tache[i];
    //           tache[i]=tache[j];
    //           tache[j]=temp;  
    //          }
             
    //        }
           
    //       }
          