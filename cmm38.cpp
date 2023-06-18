#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> triangle(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> triangle[i];
    }
    sort(triangle.begin(), triangle.end());
    if (triangle[0] + triangle[1] <= triangle[2])
        cout << "unfit" << endl;
    else
        cout << "fit" << endl;
}