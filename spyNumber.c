#include <stdio.h>
int main()
{

    int d, n, pro = 1, sum = 0;
up:
    printf("\nEnter the Number\n");
    scanf("%d", &n);
    while (n > 0)
    {
        d = n % 10;
        sum += d; //shorthand Operator
        pro *= d;
        n /= 10;
    }
    (sum == pro) ? (printf("Its spy")) : (printf("Its not spy"));
    goto up;
    return 0;
}