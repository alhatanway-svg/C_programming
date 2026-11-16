#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- SumNonFact
// Descripton : Accept number and Return difference between Sum of its factors and non factors 
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    int iNonFact = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            iNonFact = iNonFact + iCnt;
        }
    }

    return (iFact - iNonFact);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}