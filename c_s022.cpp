#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int people;
    cin >> people;
    priority_queue<pair<int, string>> pq;
    while (people--)
    {
        string name;
        cin >> name;
        int sum = 0;
        int score = 1000;
        for (int i = 0; i < 6; i++)
        {
            int n;
            cin >> n;
            if (i == 0)
                score += (n - 170) * 100;
            else
                sum += n;
        }
        score += sum * 20 + sum;
        pq.push({score, name});
    }

    while (!pq.empty())
    {
        pair<int, string> person = pq.top();
        pq.pop();
        cout << person.second << endl;
    }
}