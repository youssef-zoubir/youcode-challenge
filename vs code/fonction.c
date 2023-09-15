#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int add(int a,int b)
{
    return a+b;
}
int less(int a,int b)
{
    return a-b;
}
int mult(int a,int b)
{
    return a*b;
}
int division(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erreur : Division par zéro.\n");
        return 0.0;
    }
}
int carre(int a) {
    return a * a;
}


int racinCarree(int a) {
    if (a >= 0) {
        return sqrt(a);
    } else {
        printf("Erreur\n");
        return 0.0;
    }
}


int main()
{
   int a, b, addition, substraction, multiple, carr,dif,racinCarre;
   int choix;
   

   
   
   do{
	   	printf("1 =  addition\n");
	    printf("2 =  substraction\n");
	    printf("3 =  multiplication\n");
	    printf("4 =  division\n");
	    printf("5 =  carre\n");
	     printf("6 =  raccinCarre\n");
	    printf("7 =  quite\n");
	    printf("Choisissez un number 1-7 : ");
	    scanf("%d", &choix);
	    
	    if(choix>=1 && choix<=6){
	    	 printf("Veuillez entrer une nombre : ");
             scanf("%d", &a);
		}
		 if(choix!=5 && choix!=6){
	    	  printf("Veuillez entrer une deuxeime nombre : ");
              scanf("%d", &b);
		}
		
		switch (choix) {
	        case 1:
	            addition = add(a,b);
	            printf(" addition et :  %d\n", addition);
	            break;
	        case 2:
	            substraction = less(a,b);
	            printf(" substraction et :  %d\n", substraction);
	            break;
	        case 3:
	            multiple = mult(a,b);
	            printf(" multiple et :  %d\n", multiple);
	            break;  
	        case 4:
	            dif = division(a,b);
	            printf(" multiple et :  %d\n", dif);
	            break;
			case 5:
	            carr = carre(a);
	            printf(" carre et :  %d\n", carr);
	            break;  
			case 6:
	            racinCarre = racinCarree(a);
	            printf(" racinCarree et :  %d\n", racinCarre);
	            break; 
	   } }while (choix != 7);

         printf("Au revoir !\n");

         return 0;

}
   
   