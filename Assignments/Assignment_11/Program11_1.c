#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- RangeDisplay
// Descripton : Accept range and Display Number
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 16/11/2026
/////////////////////////////////////////////////////////////////////
void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd)
    {
        printf("Invalid range");
    }
    else
    {
        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
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

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}