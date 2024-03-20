#include<stdio.h>
void main()
{
    int qty,dis=0;
    float rate , tot;
    printf ("Enter Quantity And Rate");
    scanf("%d%f",&qty,&rate);

    if(qty>1000)
    dis=10;

    tot=(qty*rate)-(qty*rate*dis/100);
    printf("total expense = Rs %f",tot);

}