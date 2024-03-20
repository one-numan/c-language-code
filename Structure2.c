//Designated Structure
struct abc
{
    int x;
    int y;
    int z;
};
#include<stdio.h>
int main()
{
    struct abc a={.y=20,.x=10,.z=30};
    printf("%d %d %d",a.x,a.y,a.z);
    
}

