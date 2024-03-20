#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter any alphabet\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    return(ch);
    else
    {
        printf("%c",ch+32);
    }
    return 0;
}