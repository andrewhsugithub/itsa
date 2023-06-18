#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int hours, pay;
    cin >> hours >> pay;
    if (hours <= 60)
        cout << fixed << setprecision(1) << hours * pay << endl;
    if (hours <= 120)
        cout << fixed << setprecision(1) << 60 * pay + (hours - 60) * pay * 1.33 << endl;
    else
        cout << fixed << setprecision(1) << 60 * pay + 60 * pay * 1.33 + (hours - 120) * pay * 1.66 << endl;
}