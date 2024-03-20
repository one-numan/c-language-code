#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[100];
    gets(str);
    char str1[100];
    int l;
    l=strlen(str);
    j=l-1;
    // printf("%c",str[l-2]);
    for ( i = 0; i < l; i++, j--)
    {

        str1[i]=str[j];
    }
    // str[i]='\0';   
    printf("%s  %s\n",str1,str);
    if (strcmp(str,str1) == 0)
    {
        printf("\nIts Palindrome\n");
   }
   else{
       printf("\nIts not a palindrome\n");
   }
}