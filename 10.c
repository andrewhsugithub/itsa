﻿#include <stdio.h>
#include <math.h>

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));
}