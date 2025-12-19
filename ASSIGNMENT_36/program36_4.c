/////////////////////////////////////////////////////////////////////////
//
//                      Required Header Files
//
/////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <ctype.h>

///////////////////////////////////////////////////////////////
//  Function Name : DisplayDigits
//  Description   : Displays only digits present in the input string
//  Input         : Character array (string)
//  Output        : Digits printed on the screen
//  Author        : Mohit Sandip Zalte
//  Date          : 10/12/2025
///////////////////////////////////////////////////////////////
void DisplayDigits(char str[])
{
    int iCnt = 0;
    int iCount = 0;

    printf("Digits in the string: ");

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= '0' && str[iCnt] <= '9')
        {
            printf("%c", str[iCnt]);
            iCount = 1;
        }
        iCnt++;
    }

    if(iCount == 0)
    {
        printf("No digits found");
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////
//  Main Function
///////////////////////////////////////////////////////////////
int main()
{
    char Arr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s",Arr);

    DisplayDigits(Arr);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//                              TEST CASE
//
//  Input  : marvel89llous121
//  Output : 89121
//
/////////////////////////////////////////////////////////////////////////
