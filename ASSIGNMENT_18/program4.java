package ASSIGNMENT_18;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to calculate sum of even digits and 
//                  sum of odd digits from a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void SumEvenOddDigits(int num)
    {
        int iCnt = num;
        int digit = 0;
        int evenSum = 0;
        int oddSum = 0;
        int temp = num;     // store original number

        if(iCnt < 0)
        {
            iCnt = -iCnt;   // handle negative numbers
        }

        while(iCnt != 0)
        {
            digit = iCnt % 10;

            if(digit % 2 == 0)
            {
                evenSum = evenSum + digit;
            }
            else
            {
                oddSum = oddSum + digit;
            }

            iCnt = iCnt / 10;
        }

        System.out.println("Number: " + temp);
        System.out.println("Sum of even digits: " + evenSum);
        System.out.println("Sum of odd digits : " + oddSum);
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
        obj.SumEvenOddDigits(123456);  
    }
}
