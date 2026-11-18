#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Reverse
// Descripton : Accept String and Display it in Reverse Order
// Input : Char
// Output : Char
// Author : Anway Gopichand Alhat
// Date : 18/11/2026
//////////////////////////////////////////////////////////////////////
void Reverse(char *str)
{
    int iStart = 0;
    int iEnd = strlen(str) - 1;
    char temp;

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}
int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    Reverse(arr);

    printf("Reverse string: %s\n", arr);

    return EXIT_SUCCESS;
}