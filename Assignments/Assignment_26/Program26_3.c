#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Display
// Descripton : Accept Character and Display all character from input characters till Z
// Input : Integer
// Output : Integer Symbol 
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
//////////////////////////////////////////////////////////////////////
void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        while (ch <= 'Z')
        {
            printf("%c\t", ch);
            ch++;
        }
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        while (ch >= 'a')
        {
            printf("%c\t", ch);
            ch--;
        }
    }
    else
    {
        return;
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