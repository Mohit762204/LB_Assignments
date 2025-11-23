/////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : Checks whether number 11 is present in array.
//  Input         : Integer Array, Integer (Size of array)
//  Output        : Boolean (true/false)
//  Author        : Mohit Sandip Zalte
//  Date          : 23/11/2025
//
/////////////////////////////////////////////////////////////////////////

bool Check(
               int Arr[],          // Array of elements
               int iLength         // Size of array
          )
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)        // If 11 found
        {
            return true;
        }
    }
    return false;                  // 11 not found
}   // End of Check()

/////////////////////////////////////////////////////////////////////////
//
//  Main Function
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;                 // To store number of elements
    int iCnt = 0;                  // Loop counter
    int *p = NULL;                 // Pointer for dynamic array
    bool bRet = false;             // To store result

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));   // Dynamic memory allocation

    if(p == NULL)
    {
        printf("Unable to Allocate Memory\n");
        return -1;
    }

    printf("Enter %d Elements : \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ", iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize);

    if(bRet == true)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is Absent\n");
    }

    free(p);       // Free allocated memory

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                          TEST CASES
//
//  Input : 5 Elements → 11 23 45 11 9      
//  Output : 11 is Present
//
//  Input : 4 Elements → 10 20 30 40        
//  Output : 11 is Absent
//
//  Input : 3 Elements → 11 11 11           
//  Output : 11 is Present
//
//  Input : 6 Elements → 5 7 9 13 17 21     
//  Output : 11 is Absent
//
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  In Check() function there is a loop that runs iLength times.
//  Therefore : O(n)
//
//////////////////////////////////////////////////////////////////
