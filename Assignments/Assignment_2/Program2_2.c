#include<stdio.h>
#include<stdlib.h>
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
    while(iNo > iCnt)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}