// Neon Number Defination
// Neon number are those which sum of digit of square of the number are equal of the actual number
#include<stdio.h>
int main()
{
    int n,sq,sum=0;
    printf("Enter the Number ");
    scanf("%d",&n);
    sq=n*n;

    while(sq>0)
    {
        sum=sum+ sq%10;
        sq=sq/10;
    }
    if(sum==n)
    {
    printf("%d your number is neon Number",sum);
    }
    else
    {
    printf("Its not a Neon NUMBER");
    }

}