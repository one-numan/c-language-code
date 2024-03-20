#include<stdio.h>
    int sum(int,int);  //Function declaration ---
    int main()
    {
        int total;
        printf("\n\nFunction : a simple structure of function:\n\n");
        total= sum(5,6); //Function calling
        printf("The total is :%ls\n",&total);
        return 0;
    }
    int sum(int a, int b) //Function Defination
    {
        int s =a+b;
        return s; //function returning a value
    }