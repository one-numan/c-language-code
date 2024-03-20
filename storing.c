#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[5],j=0;
    for (int i = 0; i < 5; i++,j++)
    {
        printf("Enter string[%d] : \n",i);
        // printf("Your data a[%d]=%d", a[i], i); 
        scanf("%d", &a[i]);
    }
    int avg=0;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Your String a[%d] %d\n",i,a[i]);
    avg=avg+a[i];
    }
    avg =avg/5;
    printf("Total marks %f",(float)avg);
}