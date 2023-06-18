#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        printf("%d*%d=%lld\n", i, i, (long long)i * i);
    }
}