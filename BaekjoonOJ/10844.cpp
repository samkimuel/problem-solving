/**
 * @file 10844.cpp
 * @brief 쉬운 계단 수
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[n][l] : 수의 길이가 n이고 마지막 숫자가 l인 계단 수의 개수
 */

#include <iostream>

using namespace std;

long long d[101][10];
long long mod = 1000000000LL;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= 9; i++)
    {
        d[1][i] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            d[i][j] = 0;
            if (j == 9)
            {
                d[i][j] += d[i - 1][j - 1];
            }
            else if (j == 0)
            {
                d[i][j] += d[i - 1][j + 1];
            }
            else
            {
                d[i][j] += d[i - 1][j - 1] + d[i - 1][j + 1];
            }
            d[i][j] %= mod;
        }
    }

    long long ans = 0;
    for (int i = 0; i <= 9; i++)
    {
        ans += d[n][i];
        ans %= mod;
    }

    cout << ans << '\n';

    return 0;
}