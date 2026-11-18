#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- DisplayDigit
// Descripton : Accept String and Display Digits of that Strings
// Input : Char
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
///////////////////////////////////////////
void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}