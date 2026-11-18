#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
/////////////////////////////////////////////////////////////////////
// Function Name :- ChkVowel
// Descripton : Accept String and Check whether it contains vowels in it or not.
// Input : Char
// Output : Char
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
//////////////////////////////////////////////////////////////////////
BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' ||
           *str == 'i' || *str == 'o' ||
           *str == 'u' || *str == 'A' ||
           *str == 'E' || *str == 'I' ||
           *str == 'O' || *str == 'U')
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}
int main()
{
    char arr[100];
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return EXIT_SUCCESS;
}