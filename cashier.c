#include <stdio.h>
void main()
{
    int a[30],tt=0, i, n;
    printf("Enter the list of number\n");
    scanf("%d", &n);

    printf("Enter your %d elements in a list\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    tt=tt+a[i];
}
printf("%d your",tt);
}