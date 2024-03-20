// ________________TYPES Of Function________________
// Type 1: NO arguments pased and no return value________________

// Program checkPrimeNumber




#include <stdio.h>
void checkPrimeNumber(); //Function declaration
int main()
{
    checkPrimeNumber(); //argument not passed //Function calling
     return 0;
} //return types of the function is void because
// function not returning anything
void checkPrimeNumber()
{
    int n, i, flag = 0;
    printf("\nenter the positive no :\n");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number", n);
    else
        printf("%d is a prime number:", n);
}