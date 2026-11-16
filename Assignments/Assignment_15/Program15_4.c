#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Multiply
// Descripton : Accept Name and Print that Name
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////
int Multiply(int No1, int No2, int No3)
{
    int iMult = 1;

    if(No1 != 0)
    {
        iMult = iMult * No1;
    }

    if(No2 != 0)
    {
        iMult = iMult * No2;
    }

    if(No3 != 0)
    {
        iMult = iMult * No3;
    }

    if(No1 == 0 && No2 == 0 && No3 == 0)
    {
        return 0;
    }

    return iMult;
}
int main()
{
    int Ivalue1 = 0, Ivalue2 = 0, Ivalue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &Ivalue1, &Ivalue2, &Ivalue3);

    iRet = Multiply(Ivalue1, Ivalue2, Ivalue3);

    printf("Multiplication is: %d", iRet);

    return EXIT_SUCCESS;
}