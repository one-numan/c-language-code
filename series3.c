// Enter the Series of N and get the Sum and Average of this series
#include <stdio.h>
int main()
{
    int sum=0 , i, n,a[50];
    float avg;
    printf("Enter the Length of Array");
    scanf("%d",&n);
    printf("Enter the Element");

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/n;

    printf("\n %d Sum of the Array \n %.2f Avg of the Element ",sum,avg);
    
}