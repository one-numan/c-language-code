#include<stdio.h>
int main()
{
    int a[10]={12,44,56,75,78,98,90,85};
    int del,i,n=9,fl=0;
    scanf("%d",&del);
    for ( i = 0; i < n; i++)
    {
        if(a[i]==del)
        {
            fl=1;
            n--;
            printf("element Del \n");
            a[i]=a[n-1];
            break;

        }
    }
        if(fl == 0)
        {
            printf("Element not here");
        }

 for ( i = 0; i < n-1; i++)
 {
     printf("%d ",a[i]);
 }
    
}