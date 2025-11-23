//////////////////////////////////////////////////////////////////
//
//  Required Libraries
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////
//
//  Function Name : CheckZero
//  Description :   Displays the avaibility of zero
//  Input :         Int
//  Output :        String
//  Author :        Mohit Sandip Zalte
//  Date :          30/10/2025
//
//////////////////////////////////////////////////////////////////
bool CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

//////////////////////////////////////////////////////////////////
//
//  Main Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = FALSE;
    
    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is No Zero");
    }
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//                          TEST CASES :
//
//  1. Input : 120    Output : It Contains Zero
//
//  2. Input : 122    Output : There is No Zero
//
//////////////////////////////////////////////////////////////////