#include <stdio.h>
#include <string.h>
void concatenate(char[30], char[30]);
void main()
{
    char q[30], w[30],i;
    printf("\nenter the Two String :\n");
    gets(q);
    gets(w);
    concatenate(q, w);
    printf("Your string %s", q);
}
void concatenate(char s1[], char s2[])
{
    int i, j;
    i=strlen(s1);
    for (j = 0; s2[j]!='\0'; j++,i++ )
    {
        s1[i]=s2[j];
        s1[i]='\0';
    }
}