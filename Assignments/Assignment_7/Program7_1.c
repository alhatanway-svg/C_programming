#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Pattern
// Descripton : Print $ & *
// Input : Integer
// Output : Symbols
// Author : Anway Gopichand Alhat
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
