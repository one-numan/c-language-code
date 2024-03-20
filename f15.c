#include <stdio.h>
void printNaturalNumbers(int start, int end);
int main()
{
    int s, e;
    printf("Enter the lower range to print natural number");
    scanf("%d", &s);
    printf("Enter the upper limit to print natural number");
    scanf("%d", &e);

    printNaturalNumbers(s, e);
    return 0;
}

void printNaturalNumbers(int start, int end)
{
    print("Natural Number from %d to %d are : \n", start, end);
    while(start<=end){
        print("%d , ",start);
        start++;
    }
}