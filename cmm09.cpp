#include <iostream>
using namespace std;

int main()
{
    int shift;
    cin >> shift;
    if (shift > 31)
    {
        printf("Value of more than 31\n");
    }
    else
        cout << (1 << shift) << endl;
}