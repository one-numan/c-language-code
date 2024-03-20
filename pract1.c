#include <stdio.h>
void main()
{
    int i, j, a[10][10], m, n;

    (printf("Enter the ROW and Column") && scanf("%d%d",&m,&n));
   for ( i = 0; i < m; i++)
   {

  for ( j = 0; j < m; j++)
  {
     scanf("%d",&a[i][j]);
  }
       /* code */
   }
   for ( i = 0; i < m; i++)
   {
       printf("\n");

  for ( j = 0; j < m; j++)
  {
     printf("%d\t",a[i][j]);
  }
       /* code */
   }
}
