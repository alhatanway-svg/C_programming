#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- DisplayConvert
// Descripton : Convert Case
// Input : Char
// Output : Char
// Author : Anway Gopichand Alhat
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////
void DisplayConvert(char CValue)
{
    if (CValue >='a' && CValue <='z')
    {
        printf("%c\n",CValue - 32);
    }
    else if (CValue >='A' && CValue <='z')
    {
        printf("%c\n",CValue + 32);
    }
}
int main()
{
    char cValue ='\0';

    printf("Enter Characters:\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}