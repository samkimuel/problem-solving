/**
 * @file 10820(c++).cpp
 * @brief 문자열 분석 : string
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    while (getline(cin, s))
    {
        int cnt[4] = {0}; // 소문자, 대문자, 숫자, 공백 순
        for (char c : s)
        {
            if (c >= 'a' && c <= 'z')
            {
                cnt[0]++;
            }
            else if (c >= 'A' && c <= 'Z')
            {
                cnt[1]++;
            }
            else if (c >= '0' && c <= '9')
            {
                cnt[2]++;
            }
            else if (c == ' ')
            {
                cnt[3]++;
            }
        }

        for (int i = 0; i < 4; i++)
        {
            cout << cnt[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}