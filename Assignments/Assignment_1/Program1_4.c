#include<stdio.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Check
// Descripton : Division 
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo %5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible By 5");
    }
    else
    {
        printf("Not Divisible By 5");
    }
    return 0;
}