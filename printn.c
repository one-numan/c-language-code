//Guess The Ouput
#include<stdio.h>
int main()
{
    int n=4,i,j,p;
    p=n;   
    for (i=1;i<=p;i++){
        for(j=1;j<=i;j++){
            printf("%d",n);
        }
            n=n-1;
    printf("\n");
    }
}   