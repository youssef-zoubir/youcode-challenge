#include<stdio.h>
 struct emp
 {
  char firstname[30];
  char lastname[30];
  date_de_naissance birth;
  void (*age)(int);  
 };

 typedef struct 
 {
   int day;
   int month;
   int year;
 }date_de_naissance;
 
void age(int year)
{
    int currentyear = 2023;
    printf("The Age is: %d", (currentyear - dob.year));
}  
 

int main()
{
    struct emp emp1 = {"samir", "mkhlofi", {14, 04, 2000}, age};
    emp1.age(emp1.birth.year);
    return 0;
}