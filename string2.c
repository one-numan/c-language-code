// One dimensional Array String
#include<stdio.h>
#include<string.h>
int main()
{
    // char name []="Hello";
    char name[]={'H','A','E','S','L','E','R','\0'};
    int t;
    printf("%s\n",name);
    t=strlen(name);
    printf("%d\n",t);
    int i=0;
    int count=0;
    char eman[]={};
    while (name[i] != '\0')       
    {
        printf("%c",name[i]);
        count ++;
        // eman[t-i]=name[i];
        i++;
    }
  printf ("\n\n\n%d\n \n\n\n%s",count,eman);  
}
