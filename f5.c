#include <stdio.h>
   int  message1(); //Message Decleation
int    message2();
void main()
{
    message1(); //message Calling
    message2();
}
int message2()
{
    printf("\n But the butter was bitter"); //message defination
}
int message1()
{
    printf("\n Mary bought some butter");
}