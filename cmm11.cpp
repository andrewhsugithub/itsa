#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        printf("NT10=%d\n", n / 10);
        n %= 10;
        printf("NT5=%d\n", n / 5);
        n %= 5;
        printf("NT1=%d\n", n);
    }
    return 0;
}