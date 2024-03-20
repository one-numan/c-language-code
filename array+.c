void read(int[][30], int, int);                      /* scanf FUNCTION Defination */
void print(int[][30], int, int);                     /* Priting Fucntion Defination */
void add(int[][30], int[][30], int[][30], int, int); /* addition Function Defination*/

#include <stdio.h>
void main()
{
    /* m is for row and n for Column*/
    int a[30][30], b[30][30], c[30][30], m, n;

    printf("\n\nEnter the Length of array Row and Column\n\n");
    scanf("%d%d", &m, &n);
    printf("\n\nEnter the element of array 1\n\n");
    read(a, m, n); /*Read FUNCTION Calling*/
    printf("\n\nEnter the element of array 2\n\n");
    read(b, m, n); /*Read FUNCTION Calling*/

    /* now adding start with the addFUNCTION */
    add(a, b, c, m, n); /*Adding FUNCTION  Calling*/
    print(c, m, n);     /* Printing FUNCTION  Calling*/
}

void add(int x[][30], int y[][30], int z[][30], int m, int n)
{ /* Addition  Function DEfination*/
    int i, j;
    for (i = 0; i < m; i++)

        for (j = 0; j < n; j++)
        {
            z[i][j] = y[i][j] + x[i][j];
        }
}
void read(int x[][30], int m, int n)
{ /* Reading Function Defination*/
    int i, j;
    for (i = 0; i < m; i++)

        for (j = 0; j < n; j++)
        {
            scanf("%d", &x[i][j]);
        }
}
void print(int x[][30], int m, int n)
{ /* Printing FUNCTION DEfination*/
    int i, j;
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", x[i][j]);
        }
    }
}