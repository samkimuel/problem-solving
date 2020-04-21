/**
 * @file 1158.cpp
 * @brief 요세푸스 문제
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> q;

    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= a; i++)
    {
        q.push(i);
    }

    cout << '<';
    while (q.size() > 1)
    {
        for (int i = 0; i < b - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">\n";

    return 0;
}