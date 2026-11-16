#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////
// Function Name :- ChkGreater
// Descripton : Accept Number and check that Number is greater than 100 or Not
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////
BOOL ChkGreater(int No)
{
    if(No > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int Ivalue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number: ");
    scanf("%d", &Ivalue);

    bRet = ChkGreater(Ivalue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS;
}