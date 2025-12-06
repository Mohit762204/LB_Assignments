package ASSIGNMENT_20;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to find the largest digit 
//                  in a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void FindLargestDigit(int num)    
    {
        int iCnt = 0;
        int largest = 0;
        int temp = num;   

        if(num < 0)
        {
            num = -num;   
        }

        while(num != 0)
        {
            iCnt = num % 10;  

            if(iCnt > largest)
            {
                largest = iCnt;
            }

            num = num / 10;
        }

        System.out.println("Largest digit in " + temp + " is: " + largest);
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
        obj.FindLargestDigit(83429);   // Output: 9
    }

    /////////////////////////////////////////////////////////////////////
    //
    //                            TEST CASES
    //
    /////////////////////////////////////////////////////////////////////
    //
    //  1. Input : 83429
    //     Output: Largest digit in 83429 is: 9
    //
    //  2. Input : 105
    //     Output: Largest digit in 105 is: 5
    //
    //  3. Input : 999
    //     Output: Largest digit in 999 is: 9
    //
    //  4. Input : -4321
    //     Output: Largest digit in -4321 is: 4
    //
    //  5. Input : 7
    //     Output: Largest digit in 7 is: 7
    //
    /////////////////////////////////////////////////////////////////////
}