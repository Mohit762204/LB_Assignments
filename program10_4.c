#include<stdio.h>

double FhtoCs(float fTemp)
{
    double Celsius = 0.0;
    Celsius = (fTemp - 32.0) * (5.0/9.0);

    return Celsius;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit :");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Fahrenheit to Celsius :%lf",dRet);

    return 0;
}