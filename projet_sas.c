#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct mag{
    
    int id;
    char titre[20];
    char description[100];
    int  deadline;
    char statut[100];
};
    struct mag tache[500];   
    int n;
    
   void ajouterN(){
    printf("saisir n tache : ");
    scanf("%d", &n); 

    for(int i = 0 ; i < n ; i++)
    {
         printf("entrer id :");
         scanf("%d",&tache[i].id);

         printf("entrer titre : ");
         scanf("%s",&tache[i].titre);

         printf("entrer description :  ");
         scanf("%s",&tache[i].description); 

         printf("entrer deadline :  ");
         scanf("%d",&tache[i].deadline); 

         printf("entrer statut :  ");
         scanf("%s",&tache[i].statut);       
    }
   }

   void afficher()
   {
        for(int i = 0 ; i < n ; i++)
        {
        printf(" id :%d\n", tache[i].id);       
        printf(" titre :%s\n", tache[i].titre);
        printf(" description : %s\n" , tache[i].description);
        printf(" deadline: %d\n", tache[i].deadline);
        printf(" statut: %s\n" , tache[i].statut); 
        }
   }
   void modifier()
   {
    int choix;
    int id;

    printf("1=description :\n");
    printf("2=statut : \n");
    printf("3=deadline  : \n");
    printf("choose la modifier :");
    scanf("%d",&choix);

     printf("entrer id  ");
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
            scanf("%d",tache[i].deadline );
        }
    }
        break;    
    default:
        break;
    }
   }
 
   void suppriner()
   {
    
   }

    void Rechercher()
    {
        int id;
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

    void Statistiques()
    {

    }

    void menu (){ 
        
   int choix;

   do
   {  
    printf("1=Ajouter une nouvelle tache \n");
    printf("2=Ajouter plusieurs nouvelles taches. \n");
    printf("3=Afficher la liste de toutes les taches \n");
    printf("4=Modifier une tache \n");
    printf("5=Supprimer une tache par identifiant. \n");
    printf("6=Rechercher les Taches \n");
    printf("7=Statistiques : \n");
    printf("entrer un choix entre 1-7:");
    scanf("%d",&choix);

  switch (choix)
  {
    case 1:
   ajouterN();
    break;

    case 2:
    break;

    case 3:
   afficher();
    break;

    case 4:
   modifier();
    break;

    case 5:
    
    break;

    case 6:
   Rechercher();
    break;

    case 7:
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
