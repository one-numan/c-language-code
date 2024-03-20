// Example 2.2 :- The current year and the year in which the
// employee joined the organization are entered through the
// keyboard . If the number of years for which the employee
// has served the organization is greater than 3 then a bonus
// of Rs.2500/- is given to the employee .If the year of service
// are not greater than 3. then the programs should do nothing.

// Calculation of bonus
#include <stdio.h>
int main()
{
    int cy, yoj, yos, bonus;
    // CY is Current year
    // YOJ is Year of Joinging
    // YOS is Year of Served
    printf("Enter Current Year and Year Of Joining");
    scanf("%d%d", &cy, &yoj);
    //taking input of CY AND YOJ
    yos = cy - yoj;

    if (yos > 3)
    {
        bonus = 2500;
        printf("Bonus = Rs.%d", bonus);
    }
    return 0;
}
