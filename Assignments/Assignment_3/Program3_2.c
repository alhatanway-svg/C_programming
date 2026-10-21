#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Display Factor
// Descripton : Print Even Factors
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////
void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo / 2;i++)
    {
        if((iNo) %i == 0 && i % 2 == 0)
        {
            printf("%d\t",i);
        }
    }
    printf("%d\n",iNo);
}
int main()
{
    int iValue = 0;
    printf("Enter Value:");
    scanf("%d",&iValue);
    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}