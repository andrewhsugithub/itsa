//! wrong

#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int ropes;
        cin >> ropes;
        function<bool(pair<int, int>, pair<int, int>)> cmp = [](pair<int, int> l, pair<int, int> r)
        {
            if (l.first == r.first)
                return l.second > r.second;
            else
                return l.first > r.first;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
        while (ropes--)
        {
            int start, end;
            cin >> start >> end;
            if (start > end)
                swap(start, end);
            pq.push({start, end});
        }
        int start = pq.top().first, end = pq.top().second;
        pq.pop();
        int length = 0;
        while (!pq.empty())
        {
            pair<int, int> rope = pq.top();
            pq.pop();
            if (rope.first > end)
            {
                length += end - start;
                start = rope.first;
                end = rope.second;
            }
            else if (rope.second < end)
                continue;
            else
                end = rope.second;
        }
        length += end - start;
        cout << length << endl;
    }
}