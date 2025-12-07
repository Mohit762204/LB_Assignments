/////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description   : Counts even numbers from the given array.
//  Input         : Integer Array, Integer (Size of array)
//  Output        : Integer (Count of even numbers)
//  Author        : Mohit Sandip Zalte
//  Date          : 23/11/2025
//
/////////////////////////////////////////////////////////////////////////

int CountEven(
                 int Arr[],       
                 int iLength      
              )
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)   
        {
            iCount++;
        }
    }
    return iCount;
}   // End of CountEven()

/////////////////////////////////////////////////////////////////////////
//
//  Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;               
    int iCnt = 0;                
    int iRet = 0;                
    int *p = NULL;               

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));   

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d Elements :\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ", iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("Result (Even Count) is : %d\n", iRet);

    free(p);     // Free allocated memory

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                           TEST CASES
//
//  1. Input : 6 Elements → 10 21 30 41 50 61
//     Output: 3
//
//  2. Input : 5 Elements → 2 4 6 8 10
//     Output: 5
//
//  3. Input : 4 Elements → 1 3 5 7
//     Output: 0
//
//  4. Input : 7 Elements → 11 22 33 44 55 66 77
//     Output: 3
//
/////////////////////////////////////////////////////////////////////////