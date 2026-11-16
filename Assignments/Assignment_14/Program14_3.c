#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- NonFact
// Descripton : Accept number and Display its non factors 
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////
void NonFact(int iNo)
{
    int iCnt = 0;

    for (iCnt = 2; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
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

    NonFact(iValue);

    return EXIT_SUCCESS;
}