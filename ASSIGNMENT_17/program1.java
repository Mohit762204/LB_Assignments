package ASSIGNMENT_17;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to calculate sum of digits of a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void SumOfDigits(int num)
    {
        int sum = 0;
        int digit = 0;
        int iCnt = num;        // Copy original number
        int temp = num;        // Store original value for printing

        if(iCnt < 0) 
        {
            iCnt = -iCnt;      
        }

        while(iCnt != 0)
        {
            digit = iCnt % 10;  
            sum = sum + digit; 
            iCnt = iCnt / 10;  
        }

        System.out.println("Sum of digits in " + temp + " is: " + sum);
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
        obj.SumOfDigits(1234);
    }
}
