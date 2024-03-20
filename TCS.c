#include<stdio.h>
int main()
{
    int i,j,n,a=0,b=0;
    n=13;
    for ( i = 1; i <= n; i++)
    {
        if(i%2!=0){
    //  printf("%d\n",b);
        b=b+2;
        }
        else{
    //  printf("%d\n",a);
        a=a+1;
    }
    }
    if (n%2!=0){
        printf("%d\n",b-2);
    }
    else{
        printf("%d\n",a-1);
    }
    
}