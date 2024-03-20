#include<stdio.h>
#include<string.h>
int main()
{
    int a,p=0,t[10],i=0;
   printf("Enter Your Number\n") && scanf("%d",&a);
   /* Method 1 */
    // char v[10] ="1234532";
    // int n = strlen(v);
    // for ( i = 0; i < n; i++)
    // {
    // printf("%c\n",v[i]);        /* code */
    // }
    

   /* Method 2
   s */
    while (a>0)
    {
        p=a%10;
        i=i*10+p;
        a=a/10;
    
        // printf("%d\n",i);
    }
    // p=0;
    while (i>0)
    {
        p=i%10;
        printf("%d\n",p);
        i=i/10;
    }
    
    }
    