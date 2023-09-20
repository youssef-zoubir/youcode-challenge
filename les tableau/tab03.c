#include<stdio.h>

int main(){
    int T[10]={5,6,15,-5,98,67,14,1,58,-9};
    int i , j , temp ;     
   
    for (i= 0; i < 10; i++)
    {
    for ( j =i+1; j <10; j++)
    {
       if (T[i]<T[j])
       {
        temp=T[i];
        T[i]=T[j];
        T[j]=temp;

       }
    }
    
    }
    for (i= 0; i < 10; i++)
    {
        printf("%d ,",T[i]);
    }
    
   return 0;
}