#include<stdio.h>
void main(){
    int a[30],i,j,n;
    printf("\nEnter the no of element in list\n");
    scanf("%d",&n);
    printf("\nEnter the element\n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\n Your Current list \n\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    

    printf("\nEnter the location for deletion\n");
    scanf("%d",&j);
    while (j<n)
    {
        a[j-1]=a[j];
        j++;
    }
    n--;

    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    
    
    
}