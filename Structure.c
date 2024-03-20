#include<stdio.h>
int main()
{
        struct book
        {
            char *engine;
        }car1,car2;

        car1.engine="DDis 190 Engine";
        car2.engine="1.2L Kappa Dual VTVT";
        struct book car3;
        car3.engine="Its NANO";


        printf("%s\n%s\n",car1.engine,car3.engine );
        printf("%s",car2.engine);
        return 0;
        
}