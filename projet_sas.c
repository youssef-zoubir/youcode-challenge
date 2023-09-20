#include<stdio.h>
#include<stdlib.h>

   void ajouterN,ajouterP,afficher,modifier,supprimer,rechercher,Statistiques;


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
   afficher()
    break;

    case 4:
   modifier()
    break;

    case 5:
    supprimer()
    break;

    case 6:
    rechercher()
    break;

    case 7:
    Statistiques()
    break;
  }
   }

    while (choix)
   {
  
   }
}
struct p
{
    int identifiant;
    char titre;
    char description;
    int deadline;
    char statut;
};

int main(){
    menu();
    return 0;
}
