#include <stdio.h>
void main()
{
    int a[30], i, n, x, loc;
    printf("\n \n Enter the lenth of array\n");
    scanf("%d", &n);
    printf("\nEnter the Element in array\n");

    for (i = 0; i < n; i++)     
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the inserting element \n");
    scanf("%d",&x);

    printf("\nEnter the location of new element\n");
    scanf("%d", &loc);

    for (i = n - 1; i >= loc; i--)
    {
        a[i + 1] = a[i];
    }
    n++;
    a[loc - 1] = x;
    printf("NEW ARRAY");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}