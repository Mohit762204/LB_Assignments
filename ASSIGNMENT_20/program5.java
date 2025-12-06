package ASSIGNMENT_20;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to find the smallest digit 
//                  in a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void FindSmallestDigit(int num)     
    {
        int iCnt = 0;
        int smallest = 9;     
        int temp = num;       

        if(num < 0)
        {
            num = -num;       
        }

        while(num != 0)
        {
            iCnt = num % 10;   

            if(iCnt < smallest)
            {
                smallest = iCnt;
            }

            num = num / 10;     
        }

        System.out.println("Smallest digit in " + temp + " is: " + smallest);
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
        obj.FindSmallestDigit(45872);   // Output: 2
    }

    /////////////////////////////////////////////////////////////////////
    //
    //                            TEST CASES
    //
    /////////////////////////////////////////////////////////////////////
    //
    //  1. Input : 45872
    //     Output: Smallest digit in 45872 is: 2
    //
    //  2. Input : 105
    //     Output: Smallest digit in 105 is: 0
    //
    //  3. Input : 999
    //     Output: Smallest digit in 999 is: 9
    //
    //  4. Input : -4321
    //     Output: Smallest digit in -4321 is: 1
    //
    //  5. Input : 7
    //     Output: Smallest digit in 7 is: 7
    //
    /////////////////////////////////////////////////////////////////////
}