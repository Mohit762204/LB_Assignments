package ASSIGNMENT_19;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to check if a number is divisible 
//                  by 5, 11, both, or none
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void CheckDivisible(int num)
    {
        if(num % 5 == 0 && num % 11 == 0)
        {
            System.out.println(num + " is divisible by both 5 and 11");
        }
        else if(num % 5 == 0)
        {
            System.out.println(num + " is divisible by 5");
        }
        else if(num % 11 == 0)
        {
            System.out.println(num + " is divisible by 11");
        }
        else
        {
            System.out.println(num + " is NOT divisible by 5 or 11");
        }
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Main Class
//
/////////////////////////////////////////////////////////////////////////

public class program3 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.CheckDivisible(55);   // Test value
    }

    /////////////////////////////////////////////////////////////////////
    //
    //                            TEST CASES
    //
    /////////////////////////////////////////////////////////////////////
    //
    //  1. Input : 55
    //     Output: 55 is divisible by both 5 and 11
    //
    //  2. Input : 25
    //     Output: 25 is divisible by 5
    //
    //  3. Input : 22
    //     Output: 22 is divisible by 11
    //
    //  4. Input : 13
    //     Output: 13 is NOT divisible by 5 or 11
    //
    //  5. Input : 0
    //     Output: 0 is divisible by both 5 and 11
    //
    /////////////////////////////////////////////////////////////////////

}