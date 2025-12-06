package ASSIGNMENT_16;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to reverse a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic
{
    void ReverseNumber(int num)
    {
        int iCnt = 0;  
        int digit = 0;
        int reverse = 0;

        if(num < 0)  
        {
            num = -num;
        }

        while(num != 0)
        {
            digit = num % 10;
            reverse = reverse * 10 + digit;
            num = num / 10;
        }

        if(iCnt < 0)  // Restore negative sign if needed
        {
            reverse = -reverse;
        }

        System.out.println("Reverse of the number is: " + reverse);
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
        obj.ReverseNumber(1234);   
    }    
}
