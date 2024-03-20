#include<stdio.h>
int main()
{
    int a[10]={13,424,55,32,56,53,12,43,45};
    int search,i;
    int f=0;

    printf("Enter The No. To be Search");
    scanf("%d",&search);

    for ( i = 0; i < 10; i++)
    {
        if(a[i]==search)
        printf("\nYour Element here %d index\n",i+1);
        f++;
        break;
    }

    printf("Search Compelete\n");
    if ( f >= 0 )
    {
        printf("\nYou element %d is not here\n",search);
    }
    
}