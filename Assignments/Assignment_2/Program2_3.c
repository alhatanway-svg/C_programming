#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Display
// Descripton : Print "Hello" if Number is less than 10 otherwise "Demo"
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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