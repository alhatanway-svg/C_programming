#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////
// Function Name :- ChkEqual
// Descripton : Accept 2 Numbers and check Numbers are Equal or Not
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 17/11/2026
///////////////////////////////////////////

BOOL ChkEqual(int No1, int No2)
{
    if(No1 == No2)
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
    int Value1 = 0, Value2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter two numbers: ");
    scanf("%d %d", &Value1, &Value2);

    bRet = ChkEqual(Value1, Value2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS;
}