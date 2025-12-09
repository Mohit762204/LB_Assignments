/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <ctype.h>

///////////////////////////////////////////////////////////////
//  Function Name : ToUpperCase
//  Description   : Converts all lowercase letters in a string 
//                  to ToUpperCase. Other characters remain unchanged.
//  Input         : Character array (string)
//  Output        : Modified string in UpperCase
//  Author        : Mohit Sandip Zalte
//  Date          : 10/12/2025
///////////////////////////////////////////////////////////////
void ToUpperCase(char Arr[])
{
    int iCnt = 0;

    while(Arr[iCnt] != '\0')
    {
        if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
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

    ToUpperCase(Arr);

    printf("Converted string: %s\n", Arr);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASE
//
//    I/O : “Marvellous Multi oS”
//    O/P: “MARVELLOUS MULTI OS”
//
/////////////////////////////////////////////////////////////////////////
