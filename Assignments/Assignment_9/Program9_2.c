#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- DollarToINR
// Descripton : Accept in Dollar and Print Amount In INR
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 12/11/2026
/////////////////////////////////////////////////////////////////////
int DollarToINR(int iNo)
{
    int iRet = 0;

    iRet = iNo * 70;

    return iRet;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return EXIT_SUCCESS;
}
