package ASSIGNMENT_20;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to print numbers in reverse order 
//                  from given number down to 1
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void PrintReverse(int num)  
    {
        int iCnt = 0;

        for(iCnt = num; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }
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
        obj.PrintReverse(10);   // Output: 10 9 8 7 ... 1
    }

    /////////////////////////////////////////////////////////////////////
    //
    //                            TEST CASES
    //
    /////////////////////////////////////////////////////////////////////
    //
    //  1. Input : 10
    //     Output: 10 9 8 7 6 5 4 3 2 1
    //
    //  2. Input : 5
    //     Output: 5 4 3 2 1
    //
    //  3. Input : 1
    //     Output: 1
    //
    //  4. Input : 0
    //     Output: (no output)
    //
    //  5. Input : 7
    //     Output: 7 6 5 4 3 2 1
    //
    /////////////////////////////////////////////////////////////////////
}