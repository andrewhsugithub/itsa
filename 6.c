#include <stdio.h>

int main()
{
    int month;
    scanf("%d", &month);
    if (month <= 5 && month >= 3)
        printf("Spring\n");
    else if (month >= 6 && month <= 8)
        printf("Summer\n");
    else if (month >= 9 && month <= 11)
        printf("Autumn\n");
    else
        printf("Winter\n");
}