/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstOccurrence
//  Description   : Returns the index of the first occurrence of a given number in the array.
//  Input         : Integer Array, Integer (Size of array), Integer (Number to search)
//  Output        : Integer (Index of first occurrence, -1 if not found)
//  Author        : Mohit Sandip Zalte
//  Date          : 23/11/2025
//
/////////////////////////////////////////////////////////////////////////

int FirstOccurrence(
                    int Arr[],       // Array of numbers
                    int iLength,     // Number of elements
                    int iNo          // Number to search
                  )
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)      // Check for the number
        {
            return iCnt;           // Return index of first occurrence
        }
    }

    return -1;                    // Number not found
}   // End of FirstOccurrence()

/////////////////////////////////////////////////////////////////////////
//
//                            Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;        // Number of elements
    int iCnt = 0;         // Loop counter
    int iValue = 0;       // Number to search
    int *p = NULL;        // Pointer for dynamic array
    int iRet = -1;        // Index of first occurrence

    printf("Enter Number of Elements: ");
    scanf("%d", &iSize);

    printf("Enter the Number to Search: ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));   // Memory allocation

    if(p == NULL)
    {
        printf("Unable to Allocate Memory\n");
        return -1;
    }

    printf("Enter %d Elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = FirstOccurrence(p, iSize, iValue);

    if(iRet != -1)
    {
        printf("First occurrence of %d is at index: %d\n", iValue, iRet);
    }
    else
    {
        printf("%d is not present in the array.\n", iValue);
    }

    free(p);   // Release memory

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : N = 5, Elements = 10 20 30 40 50, iNo = 30
//     Output : 2
//
//  2. Input : N = 4, Elements = 1 2 3 4, iNo = 5
//     Output : -1
//
//  3. Input : N = 6, Elements = 11 22 33 22 55 66, iNo = 22
//     Output : 1
//
//  4. Input : N = 3, Elements = 5 7 9, iNo = 7
//     Output : 1
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//  Loop runs iLength times in worst case.
//  Therefore : O(n)
//
//                          Space Complexity :
//  Dynamic array used, O(n) space.
//  Constant extra space otherwise.
//  Therefore : O(n)
//
//////////////////////////////////////////////////////////////////
