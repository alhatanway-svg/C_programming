#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CountEven
// Descripton : Accept number and return the count of Even Digits...
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////
int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}