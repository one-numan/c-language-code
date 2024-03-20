//series 2 find the sum of 1 to n number

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter any no");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        printf("%d +",i);
        sum=sum+i;
    }
    printf("%d",n);
    printf("\n sum = %d",sum+7);
}