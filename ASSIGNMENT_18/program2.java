package ASSIGNMENT_18;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to print all even numbers up to a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void PrintEvenNumbers(int num)
    {
        int iCnt = 0;   
        
        System.out.println("Even numbers from 1 to " + num + " are:");

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(iCnt % 2 == 0)
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

public class program2 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.PrintEvenNumbers(20);
    }
}
