#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- LastChar
// Descripton : Accept String and Return index of last occurrence of that Character
// Input : Char
// Output : Char
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
///////////////////////////////////////////////////////////////////////
int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iPos = iCnt;
        }
        iCnt++;
        str++;
    }

    return iPos;
}
int main()
{
    char arr;
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return EXIT_SUCCESS;
}