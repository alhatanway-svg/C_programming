#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- DisplayDigit
// Descripton : Accept String and Count Number of White Spaces
// Input : Char
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
///////////////////////////////////////////
int CountWhite(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    iRet = CountWhite(arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}