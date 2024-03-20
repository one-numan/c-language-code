#include <stdio.h>
#include <stdlib.h>
int main()
{
    static int i = 0;
    i++;
    if (i <= 5)
    {
        printf("\n %d",i);
        main();
    }
    else
    {
        exit(000000);
    }
    
 return(printf("nadeem jabru"));}