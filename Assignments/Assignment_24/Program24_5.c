#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- StrRevX
// Descripton : Accept String and reverse that string in place
// Input : Char
// Output : Char
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
///////////////////////////////////////////////////////////////////////
void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char arr;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}