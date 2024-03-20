#include <stdio.h>
// int main(){
// glo is global variable
int glo = 90;
int average(int a, int b)
{
    return a + b / 2;
}
int main()
{
    int glo = 23;
    printf("%d\n", average(100, 200));
    printf("%f", (float)glo);

    return 0;
}
