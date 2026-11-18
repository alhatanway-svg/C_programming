#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Difference
// Descripton : Accept String and Return differnce between frequency of Small and Capital Character 
// Input : Char
// Output : Integer 
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
//////////////////////////////////////////////////////////////////////
int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }

    return iSmall - iCapital;
}
int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    iRet = Difference(arr);

    printf("Difference is: %d\n", iRet);

    return EXIT_SUCCESS;
}