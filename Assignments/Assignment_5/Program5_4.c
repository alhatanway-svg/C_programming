#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckMultipleDivisibility
// Descripton : Check Divisibility by 3 and 5
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 22/10/2026
/////////////////////////////////////////////////////////////////////
void CheckMultipleDivisibility(int iValue)
{
  if (iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by Both 3 and 5");
    }
    else if (iValue % 3 == 0)
    {
        printf("Divisible by Only 3");
    }
    else if (iValue % 5 == 0)
    {
        printf("Divisible by Only 5");
    }
    else
    {
        printf("Neither Divisible by 3 nor 5");
    }
}
int main(void)
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
