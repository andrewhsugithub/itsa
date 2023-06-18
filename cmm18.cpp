#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 7; i >= 0; i--)
    {
        int mask = n >> i;
        if (mask & 1)
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;
}
