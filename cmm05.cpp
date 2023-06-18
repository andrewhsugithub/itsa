#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double edge;
    while (cin >> edge)
    {
        if (edge <= 0)
            break;
        // printf("%.1lf\n", int(edge * edge * 10 + 0.5) * 0.1);
        cout << fixed << setprecision(1) << int(edge * edge * 10 + 0.5) * 0.1 << endl;
    }
}
