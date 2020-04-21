/**
 * @file 10845v2.cpp
 * @brief 큐 - 라이브러리
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> q;

    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        if (str == "push")
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (str == "pop")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (str == "size")
        {
            cout << q.size() << '\n';
        }
        else if (str == "empty")
        {
            cout << q.empty() << '\n';
        }
        else if (str == "front")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.front() << '\n';
            }
        }
        else if (str == "back")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.back() << '\n';
            }
        }
    }
    return 0;
}