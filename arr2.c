#include <stdio.h>
int main()
{
    int a[10], i, n, sum;
    printf("Enter the no of element :");
    scanf("%d", &n);
    printf("Enter the value :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("sum=%d\nAverage = %.1f",sum,(float)sum/n);




    return 0;
}