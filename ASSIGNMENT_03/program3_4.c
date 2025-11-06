#include<stdio.h>

char DisplayConvert(char Cvalue)
{
    if(Cvalue >= 'A' && Cvalue <= 'Z')
    {
        printf("%c\n", Cvalue + 32);       
    }
    else if(Cvalue >= 'a' && Cvalue <= 'z')
    {
        printf("%c\n", Cvalue - 32);
    }
}

int main ()
{
    char cValue = '\0';

    printf("Entrer Character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}