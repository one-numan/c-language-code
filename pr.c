#include <stdio.h>
void main()
{
    int a[30], i, n, x;
    (printf("\n\nEnter the length of array\n")) && (scanf("%d", &n));
    printf("\n Enter the Element\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
uppar:
    (printf("\nEnter the element will be delete\n")) && (scanf("%d", &x));
    i=0;
  while(i<n && x!=a[i])
  i++;
  if(i<n){ printf("\nElement found and Deleted\nNew Array\n");
  }
    else
    {
        printf("\nWrong Number entered\n");
        goto uppar;
    }
  
   while (x < n)
    {
        a[x - 1] = a[x];
        x++;
    } n--;
     for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
}  

// using go to statment and its work very cool
