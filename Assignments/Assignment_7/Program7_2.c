#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Display
// Descripton : Accept Number from user to print number
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
