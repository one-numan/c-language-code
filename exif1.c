#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the number");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("This is a game");
    else
    {
        printf("You have to play");
    }

    return 0;
}