#include<stdio.h>
int main()
{
    int *p1, *p2,sum;

    printf("Enter the number ");
    scanf("%d %d",&*p1,&*p2);
    sum=*p1 + *p2;
    printf("\n Your sum is %d",sum);
}