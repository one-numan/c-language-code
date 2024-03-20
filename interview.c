#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int a[n],b[n];
int p=n;
for (int i = 0; i < n; i++ )
{
  scanf("%d",&a[i]);

}
printf("Its Reverse ");
for (int i = 0; i < n; i++)
{
  p--;
  b[p]=a[i];
}

for (int i = 0; i < n; i++)
{
  printf("%d\n",b[i]);
}





}