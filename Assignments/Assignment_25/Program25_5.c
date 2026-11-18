#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- DisplaySchedule
// Descripton : Accept Division of Student Display Exam Timing
// Input : Char
// Output : Char Integer
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
//////////////////////////////////////////////////////////////////////
void DisplaySchedule(char chDiv)
{
    if ((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam at 7 AM\n");
    }
    else if ((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if ((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if ((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid division\n");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}