#include <stdio.h>

int main()
{
   char firstName[20];
   char lastName[20];
   int age;
   char sexe[20];
   int number;

   printf("Enter Your Firstname : ");
   scanf("%s",&firstName);

   printf("Enter Your Lastname : ");
   scanf("%s",&lastName);

   printf("Enter Your age : ");
   scanf("%d", &age);

 printf("Enter Your sexe : ");
   scanf("%s",&sexe);

    printf("Enter Your Number : ");
   scanf("%d",&number);

   printf("\n");

   printf("Your Firstname is : %s\n", firstName);
   printf("Your Lastname is : %s\n", lastName);
   printf("Your age is : %hd\n", age);
   printf("Your sexe is : %s\n", sexe);
   printf("Your age is : %ld\n", number);


   
   return 0;

}
