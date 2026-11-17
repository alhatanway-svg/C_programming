#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Pattern
// Descripton : Accept Number of rows and Columns and display in Pattern
// Input : Integer
// Output : Char
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", ch);
        ch++;
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements:");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}