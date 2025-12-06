package ASSIGNMENT_21;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to count even and odd numbers 
//                  from 1 to a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void CountEvenOddRange(int num)      
    {
        int iCnt = 1;
        int evenCount = 0;
        int oddCount = 0;

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(iCnt % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }

        System.out.println("Total Even numbers from 1 to " + num + " = " + evenCount);
        System.out.println("Total Odd numbers from 1 to " + num + " = " + oddCount);
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Main Class
//
/////////////////////////////////////////////////////////////////////////

public class program2    
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();

        obj.CountEvenOddRange(50);
    }

    /////////////////////////////////////////////////////////////////////
        //
        //                            TEST CASES
        //
        /////////////////////////////////////////////////////////////////////
        //
        //  1. Input : 10
        //     Output: Total Even numbers from 1 to 10 = 5
        //             Total Odd numbers from 1 to 10 = 5
        //
        //  2. Input : 15
        //     Output: Total Even numbers from 1 to 15 = 7
        //             Total Odd numbers from 1 to 15 = 8
        //
        //  3. Input : 1
        //     Output: Total Even numbers from 1 to 1 = 0
        //             Total Odd numbers from 1 to 1 = 1
        //
        //  4. Input : 0
        //     Output: Total Even numbers from 1 to 0 = 0
        //             Total Odd numbers from 1 to 0 = 0
        //
        //  5. Input : 50
        //     Output: Total Even numbers from 1 to 50 = 25
        //             Total Odd numbers from 1 to 50 = 25
        //
        /////////////////////////////////////////////////////////////////////
}