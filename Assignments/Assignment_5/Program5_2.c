#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckLeapYear
// Descripton : Check Leap Year
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 22/10/2026
/////////////////////////////////////////////////////////////////////
void CheckLeapYear(int iYear)
{
    if ((iYear) % 400 == 0)
    {
        printf("%d is Leap Year");
    }
    else if ((iYear) % 100 == 0)
    {
        printf("%d is Not a Leap Year");
    }
    else if ((iYear) % 4 == 0)
    {
        printf("%d is a Leap Year");
    }
    else
    {
        printf("%d is Not a leap Year");
    }
}
int main()
{
    int iYear = 0;

    printf("Enter Year : ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}