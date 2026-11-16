#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CountRange
// Descripton : Accept number and return the count Digits in Between 3 and 7....
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////
int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit >= 3) && (iDigit <= 7))
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

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}