#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Table
// Descripton : Display The Table..
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 12/11/2026
/////////////////////////////////////////////////////////////////////
void Table(int iNo)
{
    int iCnt = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt <= 10)
    {
        printf("%d\t", iNo * iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}