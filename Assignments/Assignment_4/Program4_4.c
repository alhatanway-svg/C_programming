#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckVotingEligibility
// Descripton : Check Voting Eligibilty
// Input : Integer
// Output : Integer
// Author : Anway Gopichand Alhat
// Date : 22/10/2026
/////////////////////////////////////////////////////////////////////
void CheckVotingEligibility(int iAge)
{
    if (iAge < 0 )
    {
        printf("Invalid Age...!");
    }
    else if(iAge >= 18 )
    {
        printf("Eligible For Voting...");
    }
    else
    {
        printf("Not Eligiblie For Voting...");
    }
}
int main()
{
    int iAge = 0;

    printf("Enter Your Age : ");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}