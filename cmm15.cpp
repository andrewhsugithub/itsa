#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int radius_squared = 100 * 100;
    while (cin >> x >> y)
    {
        int sum = x * y;
        if (sum > radius_squared || x > 100 || y > 100)
            cout << "outside" << endl;
        else
            cout << "inside" << endl;
    }
}