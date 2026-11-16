#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- 
// Descripton : Accept Name and Print that Name
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////
int main()
{
    char Name[30];

    printf("Please enter full-name: ");
    scanf("%[^\n]",&Name);

    printf("Your name is %s", Name);

    return EXIT_SUCCESS;
}