/**
 * @file 2225v3.cpp
 * @brief 합분해
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * D[K][N] = D[K][N-1] + D[K-1][N] 의 경우 일차원 다이나믹으로 바꿀 수 잇다.
 * D2[N] = D[K][N]을 넣을 예정
 * D2[N] = D2[N-1] + D2[N]
 */

#include <iostream>

using namespace std;

long long d[201];
long long mod = 1000000000;

int main()
{
    int n, k;
    cin >> n >> k;

    d[0] = 1;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            d[j] += d[j - 1];
            d[j] %= mod;
        }
    }

    cout << d[n] << '\n';

    return 0;
}