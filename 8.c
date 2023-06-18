#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int num;
    scanf("%d", &num);

    if (num < 2)
        printf("NO\n");
    else
    {
        for (int i = 2; i < num; i++)
            if (num % i == 0)
            {
                printf("NO\n");
                exit(0);
            }
        printf("YES\n");
    }
}