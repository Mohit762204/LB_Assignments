//////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description :   Calculate the percentage
//  Input :         Int, Int
//  Output :        FLoat
//  Author :        Mohit Sandip Zalte
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////

float percentage(
                    float tMarks,            // For Total Marks
                    float oMarks             // For Obtained Marks  
                )
{
    float per = 0.0;
    if (tMarks <= 0)
    {
        printf("Total marks can not be 0.\n");
        return -1.0;
    }

        per = (oMarks / tMarks) * 100;
        return per;
}

//////////////////////////////////////////////////////////////////////////
//
//  Main Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iTotal = 0, iObtained = 0;
    float fRet = 0.0;

    printf("Please Enter Total Marks : ");
    scanf("%d", &iTotal);

    printf("Please Enter Obtained Marks : ");
    scanf("%d", &iObtained);

    fRet = percentage(iTotal, iObtained);

     if(fRet == -1.0)                                            
    {
        printf("Error : Total Marks Cannot be 0. Try Again.");
    }
    else
    {
        printf("Percentage of %d Out of %d is : %.2f%%\n", iObtained, iTotal, fRet);
    }
    return 0;
} // End of main function

//////////////////////////////////////////////////////////////////////////
//
//                          TEST CASES
//
//  1. Input : 0, 70               Output : Error: Total marks cannot be 0. Try Again.
//  2. Input : 45, 40              Output : 88.89%
//  3. Input : 600,478             Output : 79.67%
//  4. Input : 100, 30             Output : 30.00%
//
//////////////////////////////////////////////////////////////////////////
