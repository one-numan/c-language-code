#include<stdio.h>
    
    struct
    {
        char *engine;
        char *fuel_type;
    }car1,car2;

int main()
{
    car1.engine ="Honda";
    car2.engine="Hero";
    printf("%s\n%s",car1.engine,car2.engine);
return 0;
}