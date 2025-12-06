package ASSIGNMENT_19;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to display grade based on marks
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void DisplayGrade(int num)
    {
        if(num >= 90)
        {
            System.out.println("Grade: A");
        }
        else if(num >= 75)
        {
            System.out.println("Grade: B");
        }
        else if(num >= 60)
        {
            System.out.println("Grade: C");
        }
        else if(num >= 40)
        {
            System.out.println("Grade: D");
        }
        else
        {
            System.out.println("Grade: Fail");
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
        obj.DisplayGrade(82);   // Test with marks
    }

    /////////////////////////////////////////////////////////////////////
    //
    //                            TEST CASES
    //
    /////////////////////////////////////////////////////////////////////
    //
    //  1. Input : 95
    //     Output: Grade: A
    //
    //  2. Input : 82
    //     Output: Grade: B
    //
    //  3. Input : 65
    //     Output: Grade: C
    //
    //  4. Input : 45
    //     Output: Grade: D
    //
    //  5. Input : 30
    //     Output: Grade: Fail
    //
    /////////////////////////////////////////////////////////////////////

}