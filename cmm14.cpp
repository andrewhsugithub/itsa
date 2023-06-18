#include <iostream>
using namespace std;

int main()
{
    long long sec;
    cin >> sec;
    int days = sec / 86400;
    int hours = (sec % 86400) / 3600;
    int min = (sec % 3600) / 60;
    cout << days << " days\n";
    cout << hours << " hours\n";
    cout << min << " minutes\n";
    cout << sec % 60 << " seconds\n";
}