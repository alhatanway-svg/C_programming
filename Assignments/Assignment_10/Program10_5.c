#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- SquareMeter
// Descripton : Accept Area in Square Feet And Convert it into SquareMeter 
// Input : Integer
// Output : Float
// Author : Anway Gopichand Alhat
// Date : 12/11/2026
/////////////////////////////////////////////////////////////////////
double SquareMeter(int iValue)
{
    double dRet = 0.0;

    dRet = iValue * 0.092903;

    return dRet;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is %.6lf", dRet);

    return EXIT_SUCCESS;
}