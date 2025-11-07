#include<stdio.h>

int FindLargest(int x, int y, int z)
{
    if(x > y && x > z)
    {
        return x;
    }

    else if(y > x && y > z)
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
    int a = 0;
    int b = 0;
    int c = 0;
    int result = 0;

    printf("Enter Three numbers : \n");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a, b, c);
    
    printf("Largest number is : %d\n",result);

    return 0;
}