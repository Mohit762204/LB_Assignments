package ASSIGNMENT_17;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to check whether a number is palindrome
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void CheckPalindrome(int num)
    {
        int original = num;
        int reverse = 0;
        int digit = 0;

        if(num < 0) 
        {
            num = -num;   
            original = num;
        }

        while(num != 0)
        {
            digit = num % 10;
            reverse = reverse * 10 + digit;
            num = num / 10;
        }

        if(original == reverse)
        {
            System.out.println(original + " is a Palindrome Number");
        }
        else
        {
            System.out.println(original + " is NOT a Palindrome Number");
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

        obj.CheckPalindrome(121);     
    }
}
