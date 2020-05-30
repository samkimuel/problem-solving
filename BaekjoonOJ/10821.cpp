/**
 * @file 10821.cpp
 * @brief 정수의 개수
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int len = s.length();
    int cnt = 1;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ',')
        {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}