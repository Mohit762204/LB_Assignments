#include <stdio.h>

int main()
{
    char Name[30];

    printf("Please Enter Full Name : ");
    scanf("%[^\n]s", Name);  

    printf("Your Name Is : %s", Name);

    return 0;
}
