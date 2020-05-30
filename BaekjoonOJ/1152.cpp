/**
 * @file 1152.cpp
 * @brief 단어의 개수
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * c 로도 풀어보기
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int cnt = 1;

    getline(cin, s);
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
        {
            cnt++;
        }
    }

    if (s[0] == ' ')
    {
        cnt--;
    }
    if (s[len - 1] == ' ')
    {
        cnt--;
    }

    cout << cnt << '\n';

    return 0;
}