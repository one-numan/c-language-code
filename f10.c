#include <stdio.h>
int fun();
int main()
{
    int a = 30;
    fun(a);
    printf("\n%ls", &a);
    return 0;
}
int fun(int b)
{
    b = 60;

    printf("\n%d", b);
 
}
//Guess The Output
// Its Complied or Give Error
