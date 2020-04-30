/**
 * @file 10809.cpp
 * @brief 알파벳 찾기
 * @author Sam Kim (samkim2626@gmail.com)
 * @see find 함수를 사용하여 풀어볼 것
 * 
 * 1. fill_n 함수 사용
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int alphabet[26];
    fill_n(alphabet, sizeof(alphabet) / sizeof(int), -1); // 배열의 특정 범위를 특정 값으로 초기화

    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (alphabet[s[i] - 'a'] == -1)
        {
            alphabet[s[i] - 'a'] = i;
        }
    }

    for (int n : alphabet)
    {
        cout << n << ' ';
    }
    cout << '\n';

    return 0;
}