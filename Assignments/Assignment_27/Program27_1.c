#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CountCapital
// Descripton : Accept String and Count Number of Capital Characters
// Input : Char
// Output : Integer 
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
//////////////////////////////////////////////////////////////////////
int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}
int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    iRet = CountCapital(arr);

    printf("Number of capital characters: %d\n", iRet);

    return EXIT_SUCCESS;
}