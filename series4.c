//find the maximum of the element in the array
#include<stdio.h>

    int main()
    {
      int   a[50] ,n,i;
      printf("Enter The Length Of the array");
      scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
      
      int max=a[0];
      for(i=1;i<n;i++)
      {
        if(a[i] > max)
        max=a[i];
      }
      printf("%d is a maximum Value",max);
    }
