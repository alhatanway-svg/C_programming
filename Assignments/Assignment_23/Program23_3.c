#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- strtogglex
// Descripton : Accept String and Toggle the Case
// Input : Char
// Output : Char
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
///////////////////////////////////////////
void strtogglex(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char arr;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    strtogglex(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}