#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckVowel(char ch)
{
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
       ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')  
    {  
        return TRUE;   
    }
    else
    {
        return FALSE;
    }
}
 int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter Character \n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);
    if(bRet == TRUE)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }
    
    return 0;
}