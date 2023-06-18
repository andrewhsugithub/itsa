#include <stdio.h>

int main()
{
    int x, y;
    int radius_squared = 100 * 100;
    while (scanf("%d %d", &x, &y) == 2)
    {
        int sum = x * x + y * y;
        if (sum > radius_squared)
            printf("outside\n");
        else
            printf("inside\n");
    }
}