#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- RangeDisplayEven
// Descripton : Accept Range and Display all Even Number...
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
            if (iCnt % 2 == 0)
            {
                printf("%d ", iCnt);
            }
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
