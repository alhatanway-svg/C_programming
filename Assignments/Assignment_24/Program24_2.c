#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CountChar
// Descripton : Accept String and Return the Frequency of that Character
// Input : Char
// Output : Char
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
///////////////////////////////////////////////////////////////////////
int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", iRet);

    return EXIT_SUCCESS;
}