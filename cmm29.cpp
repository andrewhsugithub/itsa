﻿#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0;
    for (int i = 2; i < n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime && i > max)
        {
            max = i;
        }
    }
    cout << max << endl;
}