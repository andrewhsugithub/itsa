﻿#include <iostream>
#include <string>
using namespace std;

int main()
{
    string digits[10][5] = {{"*****", "*   *", "*   *", "*   *", "*****"},
                            {"    *", "    *", "    *", "    *", "    *"},
                            {"*****", "    *", "*****", "*    ", "*****"},
                            {"*****", "    *", "*****", "    *", "*****"},
                            {"*   *", "*   *", "*****", "    *", "    *"},
                            {"*****", "*    ", "*****", "    *", "*****"},
                            {"*****", "*    ", "*****", "*   *", "*****"},
                            {"*****", "    *", "    *", "    *", "    *"},
                            {"*****", "*   *", "*****", "*   *", "*****"},
                            {"*****", "*   *", "*****", "    *", "    *"}};
    char a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int i = 0; i < 5; i++)
    {
        cout << digits[a - '0'][i] << " " << digits[b - '0'][i] << " " << digits[c - '0'][i] << " " << digits[d - '0'][i] << endl;
        // printf("%s ", digits[a - '0'][i]);
        // printf("%s ", digits[b - '0'][i]);
        // printf("%s ", digits[c - '0'][i]);
        // printf("%s\n", digits[d - '0'][i]);
    }
}