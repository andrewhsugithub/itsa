#include <stdio.h>

int main()
{
    int mile;
    while (scanf("%d", &mile) == 1)
        printf("%.1f\n", (int)(1.6 * mile * 10 + 0.5) * 0.1);
    return 0;
}
