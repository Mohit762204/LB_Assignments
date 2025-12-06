package ASSIGNMENT_17;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to find minimum between two numbers
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void FindMin(int num1, int num2)
    {
        if(num1 < num2)
        {
            System.out.println("Minimum number is: " + num1);
        }
        else if(num2 < num1)
        {
            System.out.println("Minimum number is: " + num2);
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

public class program4 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.FindMin(20, 15);
    }
}
