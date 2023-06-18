#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num < 2)
        printf("NO\n");
    else
    {
        for (int i = 2; i < num; i++)
            if (num % i == 0)
            {
                printf("NO\n");
                return 0;
            }
        printf("YES\n");
    }
}