#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckNumber
// Descripton : Determine number is Positive or Not
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 22/10/2026
/////////////////////////////////////////////////////////////////////
void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive number",iValue);
    }
    else if (iValue < 0)
    {
        printf("Negative Number",iValue);
    }
    else
    {
        printf("Zero",iValue);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a Value : ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}