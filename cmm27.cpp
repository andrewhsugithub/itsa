#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    long long sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}