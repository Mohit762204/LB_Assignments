package ASSIGNMENT_19;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to check whether a given year is a leap year
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void CheckLeapYear(int num)
    {
        if(num % 400 == 0)
        {
            System.out.println(num + " is a Leap Year");
        }
        else if(num % 100 == 0)
        {
            System.out.println(num + " is NOT a Leap Year");
        }
        else if(num % 4 == 0)
        {
            System.out.println(num + " is a Leap Year");
        }
        else
        {
            System.out.println(num + " is NOT a Leap Year");
        }
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
        obj.CheckLeapYear(2024);   // Test year
    }

    /////////////////////////////////////////////////////////////////////
    //
    //                            TEST CASES
    //
    /////////////////////////////////////////////////////////////////////
    //
    //  1. Input : 2024
    //     Output: 2024 is a Leap Year
    //
    //  2. Input : 1900
    //     Output: 1900 is NOT a Leap Year (divisible by 100 but not 400)
    //
    //  3. Input : 2000
    //     Output: 2000 is a Leap Year (divisible by 400)
    //
    //  4. Input : 2023
    //     Output: 2023 is NOT a Leap Year
    //
    //  5. Input : 2400
    //     Output: 2400 is a Leap Year
    //
    /////////////////////////////////////////////////////////////////////
}