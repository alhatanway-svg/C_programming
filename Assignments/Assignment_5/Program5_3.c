#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- DisplayGrade
// Descripton : Calculate student Grade
// Input : Float
// Output : Float
// Author : Anway Gopichand Alhat
// Date : 22/10/2026
/////////////////////////////////////////////////////////////////////
void DisplayGrade(float fMarks)
{
    if (fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks");
    }
    else if (fMarks >= 90)
    {
        printf("Grade A");
    }
    else if (fMarks >= 75)
    {
        printf("Grade B");
    }
    else if (fMarks >= 60)
    {
        printf("Grade C");
    }
    else if (fMarks >= 40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
}
int  main()
{
    float fMarks = 0.0f;

    printf("Enter Marks : ");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}