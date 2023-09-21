#include<stdio.h>
#include<stdlib.h>
   typedef struct projet_sas
  {
    int identifian;
    char titre[20];
    char description[100];
    int  deadline;
    char statut[100];
  }mag;
  
   void ajouterN()
   {

    printf("entrer id :");
    scanf("%d",&identifian);

    printf("entrer titre :");
    scanf("%d",&titre);

    printf("entrer description :");
    scanf("%d",&description); 

    printf("entrer deadline :");
    scanf("%d",&deadline); 

    printf("entrer statut :");
    scanf("%d",&statut); 
   }

   void ajouterp(){
    
    
   }
   void afficher(){
    
   }
   void modifier(){
    
   }
   void suppriner(){
    
   }
    void Rechercher(){
    
   }
    void Statistiques(){
    
   }
    
    

    void menu (){

   int choix;

   do
   {  
    printf("1=Ajouter une nouvelle tâche \n");
    printf("2=Ajouter plusieurs nouvelles tâches. \n");
    printf("3=Afficher la liste de toutes les tâches \n");
    printf("4=Modifier une tâche \n");
    printf("5=Supprimer une tâche par identifiant. \n");
    printf("6=Rechercher les Tâches \n");
    printf("7=Statistiques : \n");
    printf("entrer un choix entre 1-7:");
    scanf("%d",&choix);

  switch (choix)
  {
    case 1:
   ajouterN();
    break;

    case 2:
    ajouterP();
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
    rechercher();
    break;

    case 7:
    Statistiques();
    break;
  }
   }

    while (choix)
   {
  
   }
}


int main(){

  

    menu();
    return 0;
}
