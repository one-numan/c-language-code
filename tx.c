#include<stdio.h>
int main(){
int X;
printf("Enter The Number");
    while (1) {
        if(X==0)
        break;
        scanf("%d",&X);
        X=X+X;

    }
    printf("%d",X);
return 0;

}