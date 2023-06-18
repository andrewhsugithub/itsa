#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int minutes;
    cin >> minutes;
    if (minutes <= 800)
        cout << fixed << setprecision(1) << minutes * 0.9 << endl;
    else if (minutes < 1500)
        cout << fixed << setprecision(1) << minutes * 0.9 * 0.9 << endl;
    else
        cout << fixed << setprecision(1) << minutes * 0.9 * 0.79 << endl;
}