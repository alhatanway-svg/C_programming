#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- FirstChar
// Descripton : Accept String and Return index of first occurrence of that Character
// Input : Char
// Output : Char
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
///////////////////////////////////////////////////////////////////////
int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            return iCnt;
        }
        iCnt++;
        str++;
    }

    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return EXIT_SUCCESS;
}