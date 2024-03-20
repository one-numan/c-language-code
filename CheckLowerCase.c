//Check the enter value is numerical , lowercase, uppercase, or special symbol
#include <stdio.h>
int main()
{
    int s ;
    // int p = (int)s;
       scanf("%d",&s);

    if (s >= 10 && 100 <= s)
    {
        printf("Between 10 or 100");
    }
    else if (s >= 101 && 200 <= s) 
    {
        printf("101 to 200 Value");
    }
    else if (s >= 1 && 9 >= s)
        {
            printf("its between 1 to 9");
        }
        else {
        printf("Try again");
    }
    printf("\n\n\n%d\n",s);
}