#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Deadline 
{
  int day;
  int month;
  int year;
};


 typedef struct mag{
    
    int id;
    char titre[90];
    char description[90];
    struct Deadline deadline;
    char statut[90];
};
   
    struct mag tache[500];   
    int n ;
 
   void ajouterN(){

    printf("###############################################\n");
    printf("\n");


    printf("saisir n tache : ");
    scanf("%d", &n); 

   printf("#################################################\n");
   printf("\n");

    for(int i = 0 ; i < n ; i++)
             {
         printf("entrer id :");
         scanf("%d",&tache[i].id);

         printf("entrer titre : ");
         scanf(" %90[^\n]",&tache[i].titre);

         printf("entrer description :  ");
         scanf(" %90[^\n]",&tache[i].description); 

         printf("entrer deadline :  ");
         scanf("%d/%d/%d",&tache[i].deadline.day,&tache[i].deadline.month,&tache[i].deadline.year); 

         printf("entrer statut :  ");
         scanf(" %90[^\n]",&tache[i].statut);     

   
    }

   }

    void trier_par_orde_alpha()
   {
      int choix;

      printf("\n[1]= Trier les taches par ordre alphabetique.");
      printf("\n[2]= Trier les taches par deadline. \n");
      scanf("%d", &choix);

      if( choix == 1)
      {
        struct mag temp;
        for (int i = 0; i < n - 1; i++)
          {
                for (int j= i+1; j < n; j++)
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
        printf("deadline :%d/%d/%d \n",tache[i].deadline.day,tache[i].deadline.month,tache[i].deadline.year);
        printf(" statut: %s\n" , tache[i].statut); 
      }
      }
      
      else if (choix == 2)
      {
        struct mag temp;
        for (int i = 0; i < n - 1; i++)
          {
                for (int j= i+1; i=j < n; j++)
            {
                  if ( tache[i].deadline.day > tache[j].deadline.day )
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
        printf("deadline : %d/%d/%d\n",tache[i].deadline.day,tache[i].deadline.month,tache[i].deadline.year);
        printf(" statut: %s\n" , tache[i].statut); 
      }
      }
      



    }

   void afficher()
   {
    int choix;
    
    printf("#################################################\n");
    printf("\n");
        for(int i = 0 ; i < n ; i++)
        {
        printf(" id :%d\n", tache[i].id);       
        printf(" titre : %s\n", tache[i].titre);
        printf(" description :  %s\n" , tache[i].description);
        printf(" deadline: %d/%d/%d \n",tache[i].deadline.day, tache[i].deadline.month, tache[i].deadline.year);
        printf(" statut: %s \n" , tache[i].statut); 
        
        }
     
   }

   void modifier()
   {
    int choix;
    int id;

    printf("1=description :\n");
    printf("2=statut : \n");
    printf("3=deadline  : \n");
    printf("choose la modifier \n:");
    scanf("%d",&choix);
   
      printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

     printf("\nentrer id :\n ");
     scanf("%d",&id);
    switch (choix)
    {
    case 1:
    for (int i = 0; i < n; i++)
    {
        if (tache[i].id==id)
        { 
            printf("entrer la nouvelle description : \n");
            scanf("%s",tache[i].description );
        } 
    }
        break;
    case 2:
    for (int i = 0; i < n; i++)
    {
        if (tache[i].id==id)
        { 
            printf("entrer la nouvelle statut : \n");
            scanf("%s",tache[i].statut ); 
        }
    }
        break;
    case 3:
   for (int i = 0; i < n; i++)
    {
        if (tache[i].id==id)
        { 
            printf("entrer la nouvelle deadline : ");
            scanf("%d/%d/%d",&tache[i].deadline.day,&tache[i].deadline.month,&tache[i].deadline.year );
        }
    }
        break;    
    default:
        break;
    }
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
   }
 
   void supprimer()
   {
    int suprm;
    int id;

    printf("entrer id :");
    scanf("%d",&id);
     for (int i = 0; i < n; i++)
     {
      if (id==tache[i].id)
      {
       tache[i]=tache[n-1];
       printf("la tache est supprimer\n");
      n--;
      break;
      }
     }
     printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
   }
   void Rechercher()
    {
        int choix;
        int id;
        char titre[20];
         printf("1=rechercher par id  :\n");
         printf("2=recherche par titre : \n");
         printf("choose :");
         scanf("%d",&choix);
   printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
        if (choix == 1)
        {
             printf("entrer id :");
             scanf("%d",&id);

             for (int i = 0; i < n; i++)
    {
        if (tache[i].id==id)
        {
        printf(" id :%d\n", tache[i].id);
        printf(" titre :%s\n", tache[i].titre);
        printf(" description : %s\n" , tache[i].description);
        printf(" deadline: %d\n", tache[i].deadline);
        printf(" statut: %s\n" , tache[i].statut);
        }
    }
        }
   0 0000000000000000000000000000000000000000000000    else
        {
             printf("entrer titre :");
             scanf("%s",&titre);

              for (int i = 0; i < n; i++)
    {
        if (tache[i].id==id)
        {
        printf(" id :%d\n", tache[i].id);
        printf(" titre :%s\n", tache[i].titre);
        printf(" description : %s\n" , tache[i].description);
        printf(" deadline: %d/%d/%d\n", tache[i].deadline.day,tache[i].deadline.month,tache[i].deadline.year);
        printf(" statut: %s\n" , tache[i].statut);
        }
    }
        }
      
   
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    }

    void Statistiques()
    {
     printf( "\n nombres total  des tache est : %d",n);

    }
    
   void menu (){ 
                 
   int choix;
   
   printf("###########    (((((((WELCOM)))))))))   ###########\n");
   printf("####################################################\n");
   printf("###########    (((MENU PRINCIPALE))))   ###########\n");
   printf("\n");
   do
   {
       printf("                    ###########    (((MENU PRINCIPALE))))   ###########\n");
    printf("\n");
    printf("[1]=Ajouter une nouvelle tache \n");
    printf("[2]=Trier les taches  \n");
    printf("[3]=Afficher la liste de toutes les taches \n");
    printf("[4]=Modifier une tache \n");
    printf("[5]=Supprimer une tache \n");
    printf("[6]=Rechercher les Taches \n");
    printf("[7]=Statistiques : \n");
    printf("\n");
    printf("entrer un choix entre 1-7:");
    scanf("%d",&choix);

  switch (choix)
  {
    case 1:
      ajouterN();
    break;

    case 2:
      trier_par_orde_alpha();
    break;

    case 3: 
      afficher();
    break;

    case 4:
      modifier();
    break;

    case 5:
      supprimer();
    break;

    case 6:
      Rechercher();
    break;

    case 7:
      Statistiques();
    break;
  }
   }

    while (choix != 7);
   {
  
   }
}

int main(){

    menu();
    return 0;
}
