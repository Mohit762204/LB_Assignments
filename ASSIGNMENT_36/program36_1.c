/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <ctype.h>

///////////////////////////////////////////////////////////////
//  Function Name : ToLowerCase
//  Description   : Converts all uppercase letters in a string 
//                  to lowercase. Other characters remain unchanged.
//  Input         : Character array (string)
//  Output        : Modified string in lowercase
//  Author        : Mohit Sandip Zalte
//  Date          : 10/12/2025
///////////////////////////////////////////////////////////////
void ToLowerCase(char Arr[])
{
    int iCnt = 0;

    while(Arr[iCnt] != '\0')
    {
        if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
        {
            Arr[iCnt] = Arr[iCnt] + 32; 
        }
        iCnt++;
    }
}

///////////////////////////////////////////////////////////////
//  Main Function
///////////////////////////////////////////////////////////////
int main()
{
    char Arr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s",Arr);  

    ToLowerCase(Arr);

    printf("Converted string: %s\n", Arr);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASE
//
//  Input  : Marvellous Multi OS
//  Output : marvellous multi os
//
/////////////////////////////////////////////////////////////////////////
