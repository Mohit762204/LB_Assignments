/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : FrequencyDiff
//  Description   : Returns difference between count of even and odd numbers.
//  Input         : Integer Array, Integer (Size of array)
//  Output        : Integer (EvenCount - OddCount)
//  Author        : Mohit Sandip Zalte
//  Date          : 23/11/2025
//
/////////////////////////////////////////////////////////////////////////

int FrequencyDiff(
                    int Arr[],         
                    int iLength        
                  )
{
    int iCnt = 0;
    int EvenCount = 0;
    int OddCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)      
        {
            EvenCount++;
        }
        else                          
        {
            OddCount++;
        }
    }
    return EvenCount - OddCount;
}   // End of FrequencyDiff()

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

    printf("Enter Number Of Elements : ");
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

    iRet = FrequencyDiff(p, iSize);

    printf("Difference (Even - Odd) is : %d\n", iRet);

    free(p);   // Release memory

    return 0;
}   // End of main()

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASES
//
//  1. Input : 6 → 10 21 30 41 50 61
//     Even = 3, Odd = 3
//     Output : 0
//
//  2. Input : 5 → 2 4 6 8 10
//     Even = 5, Odd = 0
//     Output : 5
//
//  3. Input : 4 → 1 3 5 7
//     Even = 0, Odd = 4
//     Output : -4
//
//  4. Input : 7 → 11 22 33 44 55 66 77
//     Even = 3, Odd = 4
//     Output : -1
//
/////////////////////////////////////////////////////////////////////////