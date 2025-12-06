package ASSIGNMENT_19;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to calculate power of a number 
//                  using loop (num^power)
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void CalculatePower(int num, int iNO)   
    {
        int iCnt = 1;
        int result = 1;

        for(iCnt = 1; iCnt <= iNO; iCnt++)
        {
            result = result * num;
        }

        System.out.println(num + " raised to " + iNO + " is : " + result);
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
        obj.CalculatePower(2, 5);   // Output: 32
    }

    /////////////////////////////////////////////////////////////////////
    //
    //                            TEST CASES
    //
    /////////////////////////////////////////////////////////////////////
    //
    //  1. Input : 2, 5
    //     Output: 32
    //
    //  2. Input : 3, 3
    //     Output: 27
    //
    //  3. Input : 5, 0
    //     Output: 1  (any number to power 0 is 1)
    //
    //  4. Input : 1, 10
    //     Output: 1
    //
    //  5. Input : -2, 3
    //     Output: -8
    //
    /////////////////////////////////////////////////////////////////////

}