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
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;

    for(i = 1; i <= iRow; i++)
    {

        if(i % 2 != 0)
        {
            iNo = 2;
        }
        else
        {
            iNo = 1; 
        }
        for(j = 1; j <= iCol + 1; j++)
        {
            printf("%d\t", iNo);
            iNo += 2;
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}