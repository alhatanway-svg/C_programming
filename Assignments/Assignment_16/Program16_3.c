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
    char ch = 'A';

    for(i = 1, ch = 'A'; i <= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
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