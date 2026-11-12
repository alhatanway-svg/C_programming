#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- KMtoMeter
// Descripton : Accept Distance in kilometer And Convert it into Meter 
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 12/11/2026
/////////////////////////////////////////////////////////////////////
int KMToMeter(int iNo)
{
    int iRet = 0;

    iRet = iNo * 1000;

    return iRet;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in meters is %d", iRet);

    return EXIT_SUCCESS;
}
