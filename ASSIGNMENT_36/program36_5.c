/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include <stdio.h>

///////////////////////////////////////////////////////////////
//  Function Name : CountWhiteSpaces
//  Description   : Counts the number of white space characters 
//                  in the input string.
//  Input         : Character array (string)
//  Output        : Integer (number of white spaces)
//  Author        : Mohit Sandip Zalte
//  Date          : 10/12/2025
///////////////////////////////////////////////////////////////
int CountWhiteSpaces(char Arr[])
{
    int iCnt = 0;
    int iCount = 0;

    while(Arr[iCnt] != '\0')
    {
        if(Arr[iCnt] == ' ')  
        {
            iCount++;
        }
        iCnt++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////
//  Main Function
///////////////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhiteSpaces(Arr);

    printf("Number of white spaces: %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASE
//
//  Input  : Marvellous infosystem by Piyush manohar khairnar
//  Output : 5
//
/////////////////////////////////////////////////////////////////////////
