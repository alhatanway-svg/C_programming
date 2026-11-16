#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Percentage
// Descripton : Accept total marks and obtained marks and Calculate Percentage
// Input : Integer
// Output : Float
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////
float Percentage(int Total, int Obtained)
{
    float fPer = 0.0;

    if(Total == 0)
    {
        return 0.0;
    }

    fPer = ((float)Obtained / Total) * 100;

    return fPer;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.1f%%", fRet);

    return EXIT_SUCCESS;
}