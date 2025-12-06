package ASSIGNMENT_16;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to calculate factorial of a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic
{
    // Method to calculate and display factorial of a number
    void FindFactorial(int num)
    {
        int iCnt = 0;

        if(num < 0)
        {
            System.out.println("Factorial not defined for negative numbers.");
            return;
        }

        int factorial = 1;

        for(iCnt = 1; iCnt <= num; iCnt++) // Loop from 1 to num
        {
            factorial *= iCnt;
        }

        System.out.println("Factorial of " + num + " is: " + factorial);
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
        obj.FindFactorial(5);  
    }
}
