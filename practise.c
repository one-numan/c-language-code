#include <stdio.h>
void main()
{
    int i, n, a[30];
    printf("\nenter the length in array\n");
    scanf("%d", &n);
int sum=0;
    printf("\n Enter the elements\n");
    for(i=0;i<n;i++)
    {
        (scanf("%d",&a[i])&& (sum = sum + a[i]));
    }
    printf("%d" "Sum is \n",sum);
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}