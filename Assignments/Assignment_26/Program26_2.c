#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Display
// Descripton : Accept Character and Display it is Multiple Opposite Cases
// Input : Integer
// Output : Integer Symbol 
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
//////////////////////////////////////////////////////////////////////
void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c\n", ch + 32);
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c\n", ch - 32);
    }
    else
    {
        printf("%c\n", ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}