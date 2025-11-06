#include<stdio.h>
//#include<math.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    double area = PI * fRadius * fRadius;
    return area;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle :%f",dRet);

    return 0;
}