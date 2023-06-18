#include <stdio.h>

int main()
{
    int shift;
    scanf("%d", &shift);
    if (shift > 31)
    {
        printf("Value of more than 31\n");
    }
    else
        printf("%d\n", 1 << shift);
}