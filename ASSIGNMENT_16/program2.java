package ASSIGNMENT_16;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to check whether a number is even or odd
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic
{
    // Method to check even or odd
    void CheckEvenOdd(int num)
    {
        if(num % 2 == 0)
        {
            System.out.println(num + " is Even");
        }
        else
        {
            System.out.println(num + " is Odd");
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
        obj.CheckEvenOdd(7);  
    }
}
