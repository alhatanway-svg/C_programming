#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Display
// Descripton : Accept Character and Display its ASCII value in Decimal,Octal,Hexadecimal Format
// Input : Char
// Output : Char Integer float
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
//////////////////////////////////////////////////////////////////////
void Display(char ch)
{
    printf("Decimal\t\t%d\n", ch);
    printf("Octal\t\t0%o\n", ch);
    printf("Hexadecimal\t0X%X\n", ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}