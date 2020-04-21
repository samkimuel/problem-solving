/**
 * @file 9012.cpp
 * @brief 괄호
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 스택은 구현하지 않았지만 스택의 사이즈로 판단
 */

#include <iostream>
#include <string>

using namespace std;

string isVPS(string s)
{
    int cnt = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            cnt++;
        }
        else
        {
            cnt--;
        }

        if (cnt < 0)
        {
            return "NO";
        }
    }

    if (cnt == 0)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isVPS(s) << '\n';
    }

    return 0;
}