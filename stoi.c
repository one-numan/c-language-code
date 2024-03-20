//String to Integer and Integer to String
#include <stdio.h>
#include <string.h>
void main()
{
    char s[30];
    int x,i;
    printf("Enter the Number ");
    // scanf("%d",&x);
    gets(s);
    x=0;
    for ( i = 0; s[i] != '\0'; i++)
    {
        x=x*10+s[i]-48;
        // i++;
    }
    printf("Your String %d",x);
}
