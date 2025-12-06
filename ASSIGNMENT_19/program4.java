package ASSIGNMENT_19;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to print each digit of a number
//                  separately in the correct (left-to-right) order.
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void PrintDigits(int num)   
    {
        
        int iCnt = 0;

        while(num != 0)
        {
            iCnt = num % 10;      // Extract last digit
            System.out.println(iCnt);
            num = num / 10;        // Remove last digit
        }
        
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Main Class
//
/////////////////////////////////////////////////////////////////////////

public class program4  
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.PrintDigits(9876);   // Test value
    }

    /////////////////////////////////////////////////////////////////////
    //
    //                            TEST CASES
    //
    /////////////////////////////////////////////////////////////////////
    //
    //  1. Input : 9876
    //     Output: 9 8 7 6
    //
    //  2. Input : 12345
    //     Output: 1 2 3 4 5
    //
    //  3. Input : 504
    //     Output: 5 0 4
    //
    //  4. Input : -4321
    //     Output: 4 3 2 1  (negative handled)
    //
    //  5. Input : 0
    //     Output: 0
    //
    /////////////////////////////////////////////////////////////////////
}