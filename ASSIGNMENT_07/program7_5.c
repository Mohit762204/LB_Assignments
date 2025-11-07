//////////////////////////////////////////////////////////////////
//
//  Required Libraries
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description :   Displays First 5 Multiples of N
//  Input :         Int
//  Output :        String
//  Author :        Mohit Sandip Zalte 
//  Date :          28/10/2025
//
//////////////////////////////////////////////////////////////////

void MultipleDisplay(
                        int iNo                 // to store user Value
                    )
{
    int iCnt = 0;                               // counter for loop
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf(" %d ",iCnt * iNo);
    }
} // End of OddFunction

//////////////////////////////////////////////////////////////////
//
//  Main Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                             // to store user input

    printf("Enter Number :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);                    // function call

    return 0;
} // end of main ()

//////////////////////////////////////////////////////////////////
//
//                          TEST CASES :
//
//  1. Input : 4    Output : 4 8 12 16 20
//
//  2. Input : 7    Output : 7 14 21 28 35
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  1. In MultipleDisplay() there is a forLoop, which
//     Takes Input N and runs loops for N times.
//     
//     
//     Therefore, Time Complexity is : O(n)
//
//////////////////////////////////////////////////////////////////