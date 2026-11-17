#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Pattern
// Descripton : Accept Number of rows and Columns and display in Pattern
// Input : Integer
// Output : Symbol
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol || (i + j) == (iRow + 1))
            {
                printf("*\t");
            }
            else if((i + j) < (iRow + 1))
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}