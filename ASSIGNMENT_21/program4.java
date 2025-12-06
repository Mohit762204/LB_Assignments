package ASSIGNMENT_21;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to count the number of factors 
//                  of a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void CountFactors(int num)        
    {
        int iCnt = 1;
        int count = 0;

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(num % iCnt == 0)
                count++;
        }

        System.out.println("Total number of factors of " + num + " = " + count);
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

        obj.CountFactors(20);
    }

    /////////////////////////////////////////////////////////////////////
        //
        //                            TEST CASES
        //
        /////////////////////////////////////////////////////////////////////
        //
        //  1. Input : 20
        //     Output: Total number of factors of 20 = 6  (1,2,4,5,10,20)
        //
        //  2. Input : 7
        //     Output: Total number of factors of 7 = 2  (1,7)
        //
        //  3. Input : 12
        //     Output: Total number of factors of 12 = 6  (1,2,3,4,6,12)
        //
        //  4. Input : 1
        //     Output: Total number of factors of 1 = 1  (1)
        //
        //  5. Input : 0
        //     Output: Total number of factors of 0 = undefined (special case)
        //
        /////////////////////////////////////////////////////////////////////
}
