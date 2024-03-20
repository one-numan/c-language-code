#include<stdio.h>
    int sqr(int k); //function Decleartion 
int main(){
    int k;
    int n;
    printf("\nEnter amy number for Square\n");
    scanf("%d",&n);
    n=sqr(k);//function calling
    
    printf("%d",k,(int)n);


    return 0;
}
  int sqr(int k) //function define
  {
    int v=k*k;
    return v; //function return
  }
  