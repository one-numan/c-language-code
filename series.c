#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("Enter the No. Squence\n");
    scanf("%d",&n);
    printf("\n1 ");
    for (i=2;i <=n;i++)
    {
        printf("+ 1 / %d ",i);
        sum=sum+i;

    }
    printf("\n%d \n", sum);
    
}