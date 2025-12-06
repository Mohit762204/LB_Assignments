package ASSIGNMENT_20;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to check whether a number is Perfect
//                  (A perfect number is the sum of its proper divisors)
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void CheckPerfect(int num)   
    {
        int iCnt = 1;
        int sum = 0;

        // Find divisors and calculate sum
        for(iCnt = 1; iCnt <= num / 2; iCnt++)
        {
            if(num % iCnt == 0)
            {
                sum = sum + iCnt;
            }
        }

        if(sum == num)
        {
            System.out.println(num + " is a Perfect Number");
        }
        else
        {
            System.out.println(num + " is NOT a Perfect Number");
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
        obj.CheckPerfect(6);     
    }

    /////////////////////////////////////////////////////////////////////
    //
    //                            TEST CASES
    //
    /////////////////////////////////////////////////////////////////////
    //
    //  1. Input : 6
    //     Output: 6 is a Perfect Number (1+2+3 = 6)
    //
    //  2. Input : 28
    //     Output: 28 is a Perfect Number (1+2+4+7+14 = 28)
    //
    //  3. Input : 12
    //     Output: 12 is NOT a Perfect Number (1+2+3+4+6 = 16)
    //
    //  4. Input : 1
    //     Output: 1 is NOT a Perfect Number
    //
    //  5. Input : 0
    //     Output: 0 is a Perfect Number (special case)
    //
    /////////////////////////////////////////////////////////////////////
}