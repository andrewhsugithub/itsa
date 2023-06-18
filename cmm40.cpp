#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 1;
    cout << "1 ";
    for (int i = 2; i <= n; i++)
    {
        sum += i;
        cout << "+ " << i << " ";
    }
    cout << "= " << sum << endl;
}