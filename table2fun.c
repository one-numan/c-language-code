#include<stdio.h>
int tablet(int a);

int table(int b,int c,int d)
{
    for (int i = 0; i <= c; i=i+d)
    {
        printf("%d X %d =%d \n", b, i, b * i);
    }
    
}


int tablet(int a)
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d =%d \n", a, i, a * i);
    }
    
}



int main()
{

    tablet(2);
    printf("\n");
    table(3,15,2);   
}