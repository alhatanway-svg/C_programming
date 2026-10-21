#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- ChkVowel
// Descripton : Check Whether Character is Vowel or not
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkVowel(char cValue)
{
    if (cValue == 'a' || cValue == 'e' ||
        cValue == 'i' || cValue == 'o' ||
        cValue == 'u' || cValue == 'A' ||
        cValue == 'E' || cValue == 'I' ||
        cValue == 'O' || cValue == 'U')
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

    printf("Enter character: ");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return EXIT_SUCCESS;
}