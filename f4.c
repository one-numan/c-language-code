int message(); //Message declartion
#include <stdio.h>
// int message();  //Message calling
int main()
{
    message(); //Message calling
    message(); //message calling
}
int message()
{
    printf("\nHello I will call two times");
}

// A function call be called any number of times.