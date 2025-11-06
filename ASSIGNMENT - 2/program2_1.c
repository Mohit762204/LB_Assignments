#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0; 
    
    while(iCnt < iNo)
    {
        printf(" * ");
        iCnt++;     // this is updater 
    } 
}
int main()
{
    int iValue = 0;

    printf("Enter Nnumber  : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;
}