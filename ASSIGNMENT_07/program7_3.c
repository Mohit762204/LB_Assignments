//////////////////////////////////////////////////////////////////
//
//  Required Libraries
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Displays the Number Scale
//  Input :         Int
//  Output :        String
//  Author :        Mohit Sandip Zalte 
//  Date :          28/10/2025
//
//////////////////////////////////////////////////////////////////

void Display(
                int iNo                         // Store user Value
            )
{
    int iCnt = 0;                               //  Counter for loop 

    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo ; iCnt <= iNo; iCnt++)              // business logic
    {
        printf(" %d ",iCnt);
    }
}   // End of Display()

//////////////////////////////////////////////////////////////////
//
//  Main Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                             // to store user input

    printf(" Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);                        // function call

    return 0;
}   // End of main()

//////////////////////////////////////////////////////////////////
//
//                          TEST CASES :
//
//  1. Input : 5    Output : -5 -4 -3 -2 -1 0 1 2 3 4 5
//
//  2. Input : 3    Output : -3 -2 -1 0 1 2 3
//  
//  3. Input : -5   Output : -5 -4 -3 -2 -1 0 1 2 3 4 5 
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  1. In Display() function there is for loop.
//     It Iterates till counter is not equal iNo.
//     it Iterate for ((2 * iNo) + 1).
//     
//     Therefore, Time Complexity is : O(2n)
//
//////////////////////////////////////////////////////////////////