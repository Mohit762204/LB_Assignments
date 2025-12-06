package ASSIGNMENT_18;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name    : Logic
//  Description   : Contains method to check whether a number is prime or not
//  Author        : Mohit Sandip Zalte
//  Date          : 06/12/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic 
{
    void CheckPrime(int num)
    {
        int iCnt = 0;
        boolean isPrime = true;    
        
        if(num <= 1)
        {
            System.out.println(num + " is not a prime number.");
            return;
        }

        for(iCnt = 2; iCnt <= num / 2; iCnt++)
        {
            if(num % iCnt == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
        {
            System.out.println(num + " is a prime number.");
        }
        else
        {
            System.out.println(num + " is not a prime number.");
        }
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Main Class
//
/////////////////////////////////////////////////////////////////////////

public class program1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.CheckPrime(11);
    }
}
