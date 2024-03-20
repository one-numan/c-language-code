#include<stdio.h>
int main(){
    char str[100];
    char str2[100];
    int temp;
    int sum=0;
    scanf("%s",&str);
    int i=0;
    while (str[i]!= '\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
            temp=str[i]-48;
            sum=sum+temp;
            
            printf("%d\n",temp);
        }
        i++;
    }
    
        printf("Your Sum of the String %d  ",sum);
    

}