#include<stdio.h>
void main()
{
    int qty ,dis=0;
    float price ,amt;
// qty is quantity
// dis is discount 
// price is price
// amt is amount 
  printf("\n Enter the Quantity and Price\n");
  scanf("%d%f",&qty,&price);
   
   if(qty>=1000)
   {
     amt=((qty*price)/10);
     
   }
     else{
         amt=(qty*price);
     }
     printf("Your Total Expenses is =%f",amt);
}