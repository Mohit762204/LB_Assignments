package ASSIGNMENT_18;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to print all odd numbers up to a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void PrintOddNumbers(int num)
    {
        int iCnt = 0;   

        System.out.println("Odd numbers from 1 to " + num + " are:");

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
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
        obj.PrintOddNumbers(20);
    }
}
