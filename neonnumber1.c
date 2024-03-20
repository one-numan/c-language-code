// neon number series
// neon number are thos number which sum of digit of square of the number is equal to actual number

#include<stdio.h>
int main()
{
    int n,sum=0,i;
    long int sq=0;

    printf("enter the number for a series for Neon ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        // printf("%d",i);
        sq=i*i;
        while(sq>0)
            {
                sum= sum + sq%10;
                // printf("%ld---\n",sq);
                sq=sq/10;
            }
        if (sum==i)
            {
            printf("%d is a neon number\n",i);
             }
             else{
                //  printf("%d i is not a neon number \n",i);
             }
             sum=0;
             sq=0;
    }
}