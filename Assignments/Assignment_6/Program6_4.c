#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckTriangle
// Descripton : Check Triangle Validity
// Input : Float
// Output : Float
// Author : Anway Gopichand Alhat
// Date : 22/10/2026
/////////////////////////////////////////////////////////////////////
void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if (iSide1 <= 0 || iSide2 <= 0 || iSide3 <= 0)
    {
        printf("Invalid Triangle");
    }
    else if (iSide1 + iSide2 <= iSide3 || iSide1 + iSide3 <= iSide2 || iSide2 + iSide3 <= iSide1)
    {
        printf("Invalid Triangle");
    }
    else
    {
        printf("Valid Triangle");
    }
}
int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}
