#include<stdio.h>
int calsum(int a,int b,int c);

int  main()
{
    int a,b,c,sum;
    printf("\n\nEnter Three number for calculation\n\n");

    printf("\n\nEnter A for addition\n");
    scanf("%d",&a);

    printf("\n\nEnter B for addition\n");
    scanf("%d",&b);

    printf("\n\nEnter C for addition\n");
    scanf("%d",&c);
 
    sum=calsum(a,b,c);

    printf("Your Sum is =%ls\n",&sum);
 return 0;
}

int calsum(int x,int y,int z)
{
    
    {
        // int d;
        // d=x+y+z;
        return(x+y+z);
    }
}