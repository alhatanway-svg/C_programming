#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Display
// Descripton : Display First Number in Second Number of times
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////

void Display (int iNo, int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<iFrequency;iCnt++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    printf("Enter Frequency:");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return EXIT_SUCCESS;
}