#include <iostream>
using namespace std;

int main()
{
    int up, down, height;
    cin >> up >> down >> height;
    printf("Trapezoid area:%.1f\n", (up + down) * height / 2.0);
}