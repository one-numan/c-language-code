#include <stdio.h>
#include<string.h>
void main()
{
    int b[50], m, i, j, temp, k;
    (printf("\nEnter the Square of Matrix\n")) && (scanf("%d", &m));
    printf("\nEnter the Element for %d X %d Matrix\n",m,m);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            k = i * m + j;
            scanf("%d", &b[k]);
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < m; j++)
            {
                temp = b[i * m + j];
                b[i * m + j] = b[j * m + i];
                b[j * m + i] = temp;
            }
            printf("Transpose Matrix :");
            for (i = 0; i < m; i++)
            {
                printf("\n");
                for (j = 0; j < m; j++)
                {
                    k = i * m + j;
                    printf("%d\t", b[k]);
                }
            }
        }
    }
}