git#include<stdio.h>

double ReactArea(float fWidth,float fHeight)
{
    float Area = 0.0;
    Area = fWidth * fHeight;
    return Area;
}
int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Entre Width :");
    scanf("%f",&fValue1);

    printf("Enter Height :");
    scanf("%f",&fValue2);

    dRet = ReactArea(fValue1,fValue2);

    printf("Area of Rectangle :%lf",dRet);

    return 0;
}