#include<stdio.h>
#include<stdbool.h>


bool is_divisible_by_five(int number)
{
    if(number % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number;

    printf("Enter Number:");
    scanf("%d",&number);

   printf("%s",is_divisible_by_five(number) ? "Yes" : "NO");

   return 0;
}