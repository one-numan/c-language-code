#include<stdio.h>
void main()
{
    int goals;
    printf("Enter the number of goals or any number");
    scanf("%d",&goals);
    if(goals<=5)
    goto linki;
    else {
        printf("your team win the match");

    }
    linki:
    printf("Yooooou win the match");
    
}