package ASSIGNMENT_18;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to check whether a number is positive, negative, or zero
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void CheckSign(int num)
    {
        if(num > 0)
        {
            System.out.println(num + " is a positive number.");
        }
        else if(num < 0)
        {
            System.out.println(num + " is a negative number.");
        }
        else
        {
            System.out.println("The number is zero.");
        }
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
        obj.CheckSign(-8);
    }
}
