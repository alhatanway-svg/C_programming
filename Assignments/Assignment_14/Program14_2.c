#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- FactRev
// Descripton : Accept number and Display factors in Decreasing Order
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////
void FactRev(int iNo)
{
    int iCnt = 0;

    for (iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}