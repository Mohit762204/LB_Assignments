package ASSIGNMENT_16;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to count number of digits in a given number
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic
{
    void CountDigits(int num)
    {
        int iCount = 0;
        int iCnt = 0;

        if(iCnt < 0)  
        {
            iCnt = -iCnt;
        }

        if(iCnt == 0)  
        {
            iCount = 1;
        }

        while(iCnt != 0)
        {
            iCnt = iCnt / 10;
            iCount++;
        }

        System.out.println("Number of digits in number is: " + iCount);
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
        obj.CountDigits(7865);      
    }    
}