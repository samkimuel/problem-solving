/**
 * @file 10808.cpp
 * @brief 알파벳 개수
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. count 함수 - algorithm 헤더
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for (int i = 'a'; i <= 'z'; i++)
    {
        cout << count(s.begin(), s.end(), i) << ' ';
    }
    cout << '\n';

    return 0;
}