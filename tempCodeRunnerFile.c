#include <stdio.h>

int main()
{
   char caractere;
    
    printf("Entrez un caractere : ");
    scanf("%c", &caractere);

    switch (caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
    
        printf("%c est une voyelle.\n", caractere);
        break;
        default:
            
        printf("%c n'est pas une voyelle.\n", caractere);
        break; 

    }
return 0;

}