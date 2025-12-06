package ASSIGNMENT_20;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to calculate sum of even numbers 
//                  from 1 to given number
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void SumEvenNumbers(int num)    
    {
        int iCnt = 1;
        int sum = 0;

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                sum = sum + iCnt;
            }
        }

        System.out.println("Sum of even numbers from 1 to " + num + " is: " + sum);
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Main Class
//
/////////////////////////////////////////////////////////////////////////

public class program1   
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.SumEvenNumbers(10);       // Output → 30
    }

    /////////////////////////////////////////////////////////////////////
    //
    //                            TEST CASES
    //
    /////////////////////////////////////////////////////////////////////
    //
    //  1. Input : 10
    //     Output: Sum of even numbers from 1 to 10 is: 30
    //
    //  2. Input : 5
    //     Output: Sum of even numbers from 1 to 5 is: 6 (2+4)
    //
    //  3. Input : 1
    //     Output: Sum of even numbers from 1 to 1 is: 0
    //
    //  4. Input : 0
    //     Output: Sum of even numbers from 1 to 0 is: 0
    //
    //  5. Input : 20
    //     Output: Sum of even numbers from 1 to 20 is: 110
    //
    /////////////////////////////////////////////////////////////////////
}