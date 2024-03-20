// Nested If Else

#include<stdio.h>
void main(){
    int i;
    printf("Enter 1 or 2\n");
    scanf("%d",&i);
    if(i==1)
     {
         printf("You Would go to Heaven");
     }
     else{
         if(i==2)
         printf("Hell Was Created With your Mind");
         else{
             printf("How about mother earth !");
         }
     }
}