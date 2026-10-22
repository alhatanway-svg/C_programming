#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- FindGreater
// Descripton : Find the Greater of two Number
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 22/10/2026
/////////////////////////////////////////////////////////////////////
void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater",iFirst);
    }
    else if (iFirst < iSecond)
    {
        printf("%d is Greater",iSecond);
    }
    else
    {
        printf("Both Number is Equal....");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Two Numbers : ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}