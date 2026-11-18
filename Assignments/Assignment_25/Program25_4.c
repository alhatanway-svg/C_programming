#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
/////////////////////////////////////////////////////////////////////
// Function Name :- ChkSmall
// Descripton : Accept Character and Check whether it is Small case or not
// Input : Char
// Output : Char
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
//////////////////////////////////////////////////////////////////////
BOOL ChkSmall(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);

    if (bRet == TRUE)
    {
        printf("It is Small case Character\n");
    }
    else
    {
        printf("It is not a Small case Character\n");
    }

    return EXIT_SUCCESS;
}