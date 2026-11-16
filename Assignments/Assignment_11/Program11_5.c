#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- RangeDisplayRev
// Descripton : Accept Range And Display Numbers in Reverse Order
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 16/11/2026
/////////////////////////////////////////////////////////////////////
void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd)
    {
        printf("Invalid range");
    }
    else
    {
        for (iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            printf("%d ", iCnt);
        }
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}