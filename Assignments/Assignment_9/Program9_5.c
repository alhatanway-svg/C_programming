#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- FactorialDiff
// Descripton : Print Difference Between Even and Odd Factorial
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 12/11/2026
/////////////////////////////////////////////////////////////////////
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEven = 1;
    int iOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven * iCnt;
        }
        else
        {
            iOdd = iOdd * iCnt;
        }
    }

    return (iEven - iOdd);
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}
