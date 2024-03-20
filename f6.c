#include <stdio.h>
int itlay();
int brazil();
int argentina();
void main()
{
    printf("\n Iam in main");
    itlay();
    printf("\nIam Finally back in main");
}

int itlay()
{
    printf("\n Iam in Itlay");
    brazil();
    printf("\n Iam back in Itlay");
}
int brazil()
{
    printf("\n Iam in Brazil");
    argentina();
}
int argentina()
{
    printf("\n Iam in argentina");
}