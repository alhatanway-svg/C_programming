#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- strlwrx
// Descripton : Accept String and Convert it into Lower Case
// Input : Char
// Output : Char
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
///////////////////////////////////////////
void strlwrx(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    strlwrx(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}