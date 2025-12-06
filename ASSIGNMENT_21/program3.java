package ASSIGNMENT_21;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to display all factors of a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void DisplayFactors(int num)       
    {
        int iCnt = 1;

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(num % iCnt == 0) 
            {
                System.out.print(iCnt + "  ");
            }
        }

        System.out.println("Factors of " + num + " are:");
        System.out.println();  
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

        obj.DisplayFactors(12);
    }

    /////////////////////////////////////////////////////////////////////
        //
        //                            TEST CASES
        //
        /////////////////////////////////////////////////////////////////////
        //
        //  1. Input : 12
        //     Output: Factors of 12 are: 1 2 3 4 6 12
        //
        //  2. Input : 7
        //     Output: Factors of 7 are: 1 7
        //
        //  3. Input : 1
        //     Output: Factors of 1 are: 1
        //
        //  4. Input : 20
        //     Output: Factors of 20 are: 1 2 4 5 10 20
        //
        //  5. Input : 0
        //     Output: Factors of 0 are: (undefined or handle as special case)
        //
        /////////////////////////////////////////////////////////////////////
}
