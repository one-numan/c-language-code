// Print the 2d Martix
#include<stdio.h>
int main()
{
    int a[3][3];
    // ={
    //     12,32,44,
    //     23,44,32,
    //     15,36,18,
    // };
    int i,j;
    printf("Enter the Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Your Matrix Are\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           printf("%d ",a[i][j]);

           printf("\n");
    }
}