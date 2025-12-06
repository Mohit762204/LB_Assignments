package ASSIGNMENT_16;
/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to calculate sum of first N natural numbers
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void calculateSum(int n)
    {
        int iCnt = 0;

        int sum = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)  
        {
            sum += iCnt;
        }

        System.out.println("Sum of first " + n + " natural numbers is: " + sum);
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Main Class
//
/////////////////////////////////////////////////////////////////////////

class program1
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();   
        obj.calculateSum(20);      
    }
}
