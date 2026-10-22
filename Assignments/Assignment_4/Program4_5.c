#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckDivisibility
// Descripton : Check Divisibility by 5
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 22/10/2026
/////////////////////////////////////////////////////////////////////
void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisble by 5");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}