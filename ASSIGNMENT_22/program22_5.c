/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Description   : Returns frequency of given number (iNo) in the array.
//  Input         : Integer Array, Integer (Size of array), Integer (Number to search)
//  Output        : Integer (Frequency of iNo)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/11/2025
//
/////////////////////////////////////////////////////////////////////////

int Frequency(
                int Arr[],         // Array of numbers
                int iLength,       // Number of elements
                int iNo            // Number to search
             )
{
    int iCnt = 0;
    int Count = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)       // Check for the given number
        {
            Count++;
        }
    }

    return Count;
}   // End of Frequency()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;        // To store number of elements
    int iCnt = 0;         // Loop counter
    int iValue = 0;       // Number whose frequency is to be found
    int iRet = 0;         // To store result
    int *p = NULL;        // Pointer to dynamic array

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    printf("Enter Number to Find Its Frequency : ");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));   // Memory allocation

    if(p == NULL)
    {
        printf("Unable to Allocate Memory\n");
        return -1;
    }

    printf("Enter %d Elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ", iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p, iSize, iValue);

    printf("Frequency of %d is : %d\n", iValue, iRet);

    free(p);   // Release memory

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : N = 6
//     Elements : 10 20 30 20 40 20
//     iNo = 20
//     Output : 3
//
//  2. Input : N = 5
//     Elements : 1 2 3 4 5
//     iNo = 3
//     Output : 1
//
//  3. Input : N = 7
//     Elements : 11 11 11 11 11 11 11
//     iNo = 11
//     Output : 7
//
//  4. Input : N = 4
//     Elements : 10 20 30 40
//     iNo = 50
//     Output : 0
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                      Time Complexity :
//
//  Frequency() uses a loop that runs iLength times.
//  Therefore : O(n)
//
//////////////////////////////////////////////////////////////////
