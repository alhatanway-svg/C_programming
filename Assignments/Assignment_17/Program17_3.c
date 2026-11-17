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
    char ch = '\0';

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
        ch = 'a'; 
        
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) != 0) 
            {
                printf("%c\t", ch);
                ch++;
            }
            else 
            {
                printf("%d\t", j);
            }
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