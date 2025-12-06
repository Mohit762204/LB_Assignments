package ASSIGNMENT_21;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to print all numbers from 1 to N 
//                  that are divisible by both 2 and 3
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void PrintDivisibleBy2and3(int num)         
    {
        int iCnt = 1;

        for(iCnt  = 1; iCnt <= num; iCnt++)
        {
            if(iCnt % 2 == 0 && iCnt % 3 == 0)
            {
                System.out.print(iCnt + "  ");
            }
        }

        System.out.println("Numbers from 1 to " + num + " divisible by both 2 and 3:");
        System.out.println(); // move to next line
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Main Class
//
/////////////////////////////////////////////////////////////////////////

public class program5      
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();

        obj.PrintDivisibleBy2and3(30);
    }

    /////////////////////////////////////////////////////////////////////
        //
        //                            TEST CASES
        //
        /////////////////////////////////////////////////////////////////////
        //
        //  1. Input : 30
        //     Output: Numbers from 1 to 30 divisible by both 2 and 3: 6 12 18 24 30
        //
        //  2. Input : 10
        //     Output: Numbers from 1 to 10 divisible by both 2 and 3: 6
        //
        //  3. Input : 1
        //     Output: Numbers from 1 to 1 divisible by both 2 and 3: (none)
        //
        //  4. Input : 0
        //     Output: Numbers from 1 to 0 divisible by both 2 and 3: (none)
        //
        //  5. Input : 18
        //     Output: Numbers from 1 to 18 divisible by both 2 and 3: 6 12 18
        //
        /////////////////////////////////////////////////////////////////////
}
