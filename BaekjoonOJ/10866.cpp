/**
 * @file 10866.cpp
 * @brief 덱 - 라이브러리
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    deque<int> d;

    while (n--)
    {
        string str;
        cin >> str;
        if (str == "push_front")
        {
            int num;
            cin >> num;
            d.push_front(num);
        }
        else if (str == "push_back")
        {
            int num;
            cin >> num;
            d.push_back(num);
        }
        else if (str == "pop_front")
        {
            if (d.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if (str == "pop_back")
        {
            if (d.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << d.back() << '\n';
                d.pop_back();
            }
        }
        else if (str == "size")
        {
            cout << d.size() << '\n';
        }
        else if (str == "empty")
        {
            cout << d.empty() << '\n';
        }
        else if (str == "front")
        {
            if (d.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << d.front() << '\n';
            }
        }
        else if (str == "back")
        {
            if (d.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << d.back() << '\n';
            }
        }
    }

    return 0;
}