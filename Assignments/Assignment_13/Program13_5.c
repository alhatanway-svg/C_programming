#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CountDiff
// Descripton : Accept number and return Differnce between Sum of Even digits and Odd Digits
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////
int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    return (iEven - iOdd);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}