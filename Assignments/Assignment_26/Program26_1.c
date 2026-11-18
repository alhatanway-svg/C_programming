#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- DisplayASCII
// Descripton : Display ASCII Table
// Input : Integer
// Output : Integer Symbol 
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
//////////////////////////////////////////////////////////////////////
void DisplayASCII()
{
    int i = 0;

    printf("Dec\tHex\tOct\tChar\n");
    printf("-----------------------------\n");

    for (i = 0; i <= 255; i++)
    {
        printf("%d\t%X\t%o\t%c\n", i, i, i, i);
    }
}
int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}