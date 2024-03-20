#include <stdio.h>
void main()
{
    int a[30][30]; //Its is a 2D Array
    int n;         //n is for length
    int i;         // row
    int j;         //j is for column
    int temp;      //temp is for holding temporary Value

    printf("Enter the Size of Array :");
    scanf("%d", &n); //taking input

    printf("\n\nEnter the Element of Array\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Your array is : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 1; i < n; i++)
    {

        for (j = 0; j < i; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    printf("transpose matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}