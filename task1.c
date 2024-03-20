#include<stdio.h>
int checkprime(int n);
int main()
{
    int i,j,p;
    for (i=1;i<=100;i++)
    {
        if (i%2==0) 
        {
//if true nothing print
        }
        else if(checkprime(i))
        {
// if true nothing print
        }
        else{
            printf("%d ",i);
        }        
    }
}

int checkprime(int n)
{
    int i,p;
    int count;
    for(i=2;i<=n;i++)
    {
        if (n%i==0)
        {
           p=1   ; 
            
        }
        else
        {
            p=0;
            // printf("%d",n);
        }

    }
    return p;    
}