#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- struprx
// Descripton : Accept String and Convert it into Upper Case
// Input : Char
// Output : Char
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
///////////////////////////////////////////
void struprx(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    struprx(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}