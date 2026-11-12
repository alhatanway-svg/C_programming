#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Number
// Descripton : Accept N from user and Number is less than 50 print small,
//              if it is greater than 50 and less than 100 print medium , if it is greater than
//              100 then print large
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 12/11/2026
/////////////////////////////////////////////////////////////////////
void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo < 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}
