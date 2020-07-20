/**
 * @file 15988.cpp
 * @brief 1, 2, 3 더하기 3
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 코드플러스 알고리즘 기초강의1
 */

#include <iostream>

using namespace std;

long long mod = 1000000009LL;
long long d[1000001];

int main()
{
    d[0] = 1;
    for (int i = 1; i <= 1000000; i++)
    {
        if (i - 1 >= 0)
        {
            d[i] += d[i - 1];
        }
        if (i - 2 >= 0)
        {
            d[i] += d[i - 2];
        }
        if (i - 3 >= 0)
        {
            d[i] += d[i - 3];
        }
        d[i] %= mod;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << d[n] << '\n';
    }

    return 0;
}