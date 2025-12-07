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
//  Description   : Returns frequency of number 11 from the given array.
//  Input         : Integer Array, Integer (Size of array)
//  Output        : Integer (Count of 11)
//  Author        : Mohit Sandip Zalte
//  Date          : 23/11/2025
//
/////////////////////////////////////////////////////////////////////////

int Frequency(
                int Arr[],         // Array of numbers
                int iLength        // Number of elements
             )
{
    int iCnt = 0;
    int Count = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)        // Check for number 11
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
    int iSize = 0;        
    int iCnt = 0;         
    int iRet = 0;         
    int *p = NULL;        

    printf("Enter Number of Elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));   

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

    iRet = Frequency(p, iSize);

    printf("Frequency of 11 is : %d\n", iRet);

    free(p);   

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 6 → 11 20 11 30 40 11
//     Output : 3
//
//  2. Input : 5 → 1 2 3 4 5
//     Output : 0
//
//  3. Input : 7 → 11 11 11 11 11 11 11
//     Output : 7
//
//  4. Input : 4 → 10 20 30 40
//     Output : 0
//
/////////////////////////////////////////////////////////////////////////