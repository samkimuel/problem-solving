/**
 * @file 9461.cpp
 * @brief 파도반 수열
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 규칙 찾기 p[i] = p[i-2] + p[i-3] 도 가능
 * long long 선언! n이 커지면 int 범위 벗어남 -> 맞왜틀 시전ㅠㅠ
 */

#include <iostream>

using namespace std;

long long p[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    p[0] = 0;
    p[1] = 1;
    p[2] = 1;
    p[3] = 1;
    p[4] = 2;
    for (int i = 5; i < 101; i++)
    {
        p[i] = p[i - 1] + p[i - 5];
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << p[n] << '\n';
    }

    return 0;
}