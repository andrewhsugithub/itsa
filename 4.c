#include <stdio.h>
#include <math.h>

int main()
{
    int startx, starty, endx, endy;
    scanf("%d %d", &startx, &starty);
    scanf("%d %d", &endx, &endy);

    int parking_time = (endx - startx) * 60 + endy - starty;
    int cost = 0;
    if (parking_time > 4 * 60)
    {
        cost += floor((parking_time - 4 * 60) / 30) * 60;
        parking_time = 4 * 60;
    }
    if (parking_time > 2 * 60)
    {
        cost += floor((parking_time - 2 * 60) / 30) * 40;
        parking_time = 2 * 60;
    }
    if (parking_time <= 2 * 60)
        cost += floor(parking_time / 30) * 30;
    printf("%d\n", cost);
}