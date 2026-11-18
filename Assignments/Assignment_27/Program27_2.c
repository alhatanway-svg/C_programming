#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CountSmall
// Descripton : Accept String and Count Number of small Characters
// Input : Char
// Output : Integer 
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
//////////////////////////////////////////////////////////////////////
int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(arr);

    printf("Number of small characters: %d\n", iRet);

    return EXIT_SUCCESS;
}