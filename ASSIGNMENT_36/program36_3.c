/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <ctype.h>

///////////////////////////////////////////////////////////////
//  Function Name : ToggleCase
//  Description   : Converts uppercase letters to lowercase and 
//                  lowercase letters to uppercase in a string.
//  Input         : Character array (string)
//  Output        : String with toggled case
//  Author        : Mohit Sandip Zalte
//  Date          : 10/12/2025
///////////////////////////////////////////////////////////////
void ToggleCase(char Arr[])
{
    int iCnt = 0;

    while(Arr[iCnt] != '\0')
    {
        if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
        {
            Arr[iCnt] = Arr[iCnt] + 32;  
        }
        else if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
        {
            Arr[iCnt] = Arr[iCnt] - 32;  
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

    ToggleCase(Arr);

    printf("Converted string: %s\n", Arr);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASE
//
//  Input  : Marvellous Multi OS
//  Output : mARVELLOUS mULTI os
//
/////////////////////////////////////////////////////////////////////////
