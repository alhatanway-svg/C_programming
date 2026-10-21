#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- PrintEven
// Descripton : Print Even number on Screen
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    int iCnt = 0;
    if (iNo <= 0)
    {
        return ;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt * 2);
    }
}
int main ()
{
    int iValue = 0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}