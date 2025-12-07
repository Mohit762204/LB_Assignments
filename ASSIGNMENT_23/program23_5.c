/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
//  Function Name : ProductOdd
//  Description   : Returns product of all odd elements from array
//  Input         : Integer Array, Length
//  Output        : Integer (Product)
//  Author        : Mohit Sandip Zalte
//  Date          : 07/12/2025
///////////////////////////////////////////////////////////////
int ProductOdd(int arr[], int length)
{
    int iCnt = 0;
    int product = 1;
    int iOdd = 0;

    for(iCnt = 0; iCnt < length; iCnt++)
    {
        if(arr[iCnt] % 2 != 0)       
        {
            product = product * arr[iCnt];
            iOdd = 1;
        }
    }

    if(iOdd == 0)
    {
        return 0;
    }

    return product;
}

///////////////////////////////////////////////////////////////
//  Main Function
///////////////////////////////////////////////////////////////
int main()
{
    int size = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    if(size <= 0)
    {
        printf("Invalid size. Terminating program.\n");
        return -1;
    }

    ptr = (int *)malloc(size * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    printf("\nEnter %d elements:\n", size);
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        printf("Element %d: ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = ProductOdd(ptr, size);

    printf("\nProduct of all odd elements is: %d\n", iRet);

    free(ptr);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASE
//
//  Enter number of elements: 4
//    Enter 4 elements:
//    Element 1: 4
//    Element 2: 9
//    Element 3: 6
//    Element 4: 12
//
//    Product of all odd elements is: 9  
//
/////////////////////////////////////////////////////////////////////////