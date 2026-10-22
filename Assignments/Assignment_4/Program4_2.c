#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckEvenOdd
// Descripton : Check Even Or Odd Number
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 22/10/2026
/////////////////////////////////////////////////////////////////////
void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("Even Number",iValue);
    }
    else
    {
        printf("Odd Number",iValue);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}