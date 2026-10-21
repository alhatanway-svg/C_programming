#include<stdio.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Display
// Descripton : Print * on Screen
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    while(iCnt < iNo )
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf ("%d",&iValue);
    
    Display(iValue);

    return 0;
}