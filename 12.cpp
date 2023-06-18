#include <iostream>
using namespace std;

int recursive(int x)
{
    if (x <= 1)
        return x + 1;
    return recursive(x - 1) + recursive(x / 2);
}

int main()
{
    int x;
    cin >> x;
    printf("%d\n", recursive(x));
}