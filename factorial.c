#include <stdio.h>
int main()
{
    int fact = 1, i, n = 8;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        printf("%d ", fact);
    }
    printf("\n");
    fact = 1;
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
        printf("%d ", fact);
}