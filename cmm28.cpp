#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 35)
        cout << "35";
    for (int i = 36; i <= n; i++)
        if (i % 35 == 0)
            cout << " " << i;
    cout << endl;
}