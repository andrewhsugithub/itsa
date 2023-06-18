#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int distance;
    cin >> distance;
    double speedDiff = 100 - 30 * 2.54;
    cout << ceil(distance * 100 / speedDiff) << endl;
}