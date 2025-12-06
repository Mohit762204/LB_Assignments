package ASSIGNMENT_17;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to print the multiplication table of a number
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void PrintTable(int num)
    {
        int iCnt = 0;     // Loop counter

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(num + " x " + iCnt + " = " + (num * iCnt));
        }
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
        obj.PrintTable(5);
    }
}
