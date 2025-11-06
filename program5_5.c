#include<stdio.h>

int FindLargest(int x, int y, int z)
{
    if(x >= y && x >= z)
    {
        return x;
    }    
    else if(y >= x && y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int main()
{
    int a, b, c;
    int result;

    printf("Enter Three Numbers:");
    scanf("%d %d %d",&a,&b,&c);

    result = FindLargest(a,b,c);

    printf("Largest Number is:%d",result);

    return 0;
}