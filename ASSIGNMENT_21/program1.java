package ASSIGNMENT_21;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to calculate the product of all digits
//                  of a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void ProductOfDigits(int num)     
    {
        int product = 1;
        int iCnt = 0;
        int temp = num;    // store original number

        if(num < 0)
        {
            num = -num;    // handle negative numbers
        }

        while(num != 0)
        {
            iCnt = num % 10;   
            product = product * iCnt;  // multiply
            num = num / 10;    // remove last digit
        }

        System.out.println("Product of digits in " + temp + " is: " + product);
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

        obj.ProductOfDigits(234);
    }

    /////////////////////////////////////////////////////////////////////
        //
        //                            TEST CASES
        //
        /////////////////////////////////////////////////////////////////////
        //
        //  1. Input : 234
        //     Output: Product of digits in 234 is: 24
        //
        //  2. Input : 105
        //     Output: Product of digits in 105 is: 0
        //
        //  3. Input : 999
        //     Output: Product of digits in 999 is: 729
        //
        //  4. Input : -432
        //     Output: Product of digits in -432 is: 24
        //
        //  5. Input : 7
        //     Output: Product of digits in 7 is: 7
        //
        /////////////////////////////////////////////////////////////////////
}
