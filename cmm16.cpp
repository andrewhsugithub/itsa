#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int radius_squared = 100 * 100;
    while (cin >> x >> y)
    {
        int sum = x * x + y * y;
        if (sum > radius_squared)
            cout << "outside" << endl;
        else
            cout << "inside" << endl;
    }
}