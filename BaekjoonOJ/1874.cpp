/**
 * @file 1874.cpp
 * @brief 스택 수열
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * need review
 */

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string str;

    int m = 0;

    stack<int> s;
    bool possible;

    while (n--)
    {
        int x;
        cin >> x;
        if (x > m)
        {
            while (x > m)
            {
                s.push(++m);
                str += '+';
            }
            s.pop();
            str += '-';
        }
        else
        {

            if (!s.empty())
            {
                possible = false;
                int top = s.top();
                s.pop();
                str += '-';

                if (x == top)
                {
                    possible = true;
                }
            }
            if (!possible)
            {
                cout << "NO" << '\n';
                return 0;
            }
        }
    }

    for (auto ch : str)
    {
        cout << ch << '\n';
    }

    return 0;
}