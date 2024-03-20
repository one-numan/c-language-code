#include <stdio.h>
int italy(); 
int brazil();
int argentina();
int main()
{
    printf("\n Iam in main");

    italy();
    brazil();
    argentina();
}
int italy()
{
    printf("\n Iam in Italy");
}
int brazil()
{
    printf("\n Iam in Brazil");
}
int argentina()
{
    printf("\n Iam in the Argentina\n\n");
    return 0;
}