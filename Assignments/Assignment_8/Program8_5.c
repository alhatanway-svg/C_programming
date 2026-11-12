#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- TableRev
// Descripton : Reverse the table
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 12/11/2026
/////////////////////////////////////////////////////////////////////
void TableRev(int iNo)
{
    int iCnt = 10;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt >= 1)
    {
        printf("%d\t", iNo * iCnt);
        iCnt--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}