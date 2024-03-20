// C program to generate fibonacci series using function

#include <stdio.h>
void  generatefibo();
// Function Declaration

int main()
{
    generatefibo(); // Function calling
    return 0;
}

void generatefibo() //Function Defination
{
    int a, b, c, i, terms;
    //Input a number from user
    printf("ENter the number of terms: ");
    scanf("%d", &terms);
    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms:\n");
    for(i=1;i <= terms;i++){
        printf("%d ",c);
    a=b;
    b=c;
    c=a+b;
    }
}


// //Function with no return no argument