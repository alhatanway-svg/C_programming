#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- OddDisplay
// Descripton : Accept N from user to print all odd numbers upto to N.
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////
void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2 )!= 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}
