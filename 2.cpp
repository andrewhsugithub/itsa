#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int mile;
    while (cin >> mile)
    {
        printf("%.1f\n", (int)(1.6 * mile * 10 + 0.5) * 0.1);
    }
    return 0;
}
