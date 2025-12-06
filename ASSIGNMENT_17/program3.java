package ASSIGNMENT_17;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to find maximum between two numbers
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void FindMax(int num1, int num2)
    {
        if(num1 > num2)
        {
            System.out.println("Maximum number is: " + num1);
        }
        else if(num2 > num1)
        {
            System.out.println("Maximum number is: " + num2);
        }
        else
        {
            System.out.println("Both numbers are equal.");
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
        obj.FindMax(20, 15);
    }
}
