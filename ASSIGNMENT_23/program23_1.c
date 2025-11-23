/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Type Definitions
//
/////////////////////////////////////////////////////////////////////////
#define TRUE 1
#define FALSE 0
typedef int BOOL;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : Checks whether a given number exists in the array.
//  Input         : Integer Array, Integer (Size of array), Integer (Number to search)
//  Output        : BOOL (TRUE if found, FALSE otherwise)
//  Author        : Mohit Sandip Zalte
//  Date          : 30/10/2025
//
/////////////////////////////////////////////////////////////////////////

BOOL Check(
            int Arr[],       // Array of numbers
            int iLength,     // Number of elements
            int iNo          // Number to search
          )
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)      // Check if number exists
        {
            return TRUE;
        }
    }
    return FALSE;                  // Number not found
}   // End of Check()

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
    BOOL bRet = FALSE;    // To store result

    printf("Enter Number of Elements: ");
    scanf("%d", &iSize);

    printf("Enter The Number to Search: ");
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

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is Present\n");
    }
    else 
    {
        printf("Number is Absent\n");
    }

    free(p);   // Release memory

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : N = 5, Elements = 10 20 30 40 50, iNo = 30
//     Output : Number is Present
//
//  2. Input : N = 4, Elements = 1 2 3 4, iNo = 5
//     Output : Number is Absent
//
//  3. Input : N = 6, Elements = 11 22 33 44 55 66, iNo = 22
//     Output : Number is Present
//
//  4. Input : N = 3, Elements = 5 7 9, iNo = 10
//     Output : Number is Absent
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
