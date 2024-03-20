#include <stdio.h>
void main()
{
    float marks,percenteg;
    printf("Enter your percentage");
    scanf("%f",&marks);
    percenteg=(marks/500)*100;
    if (marks>=90)
    {
      printf(" Exelent performance");
     
    }
   
    else if (marks>=80)
    {
     printf("Good perforance");
    }
    else if (marks>=70)
    {
      printf("Good1 performance");  
    }
    
    else if (marks>=60)
    {
     printf("avearge perforance");
    }
    
    
    else{
      printf("Fail");
    }

      
   
}
