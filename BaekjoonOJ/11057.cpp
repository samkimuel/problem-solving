/**
 * @file 11057.cpp
 * @brief 오르막 수
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[i][j] : 길이가 i이고 마지막 숫자가 j인 오르막 수의 갯수
 * 
 * mod, 시그마 -> k로 (0 <= k <= j)
 */

#include <iostream>

using namespace std;

int mod = 10007;
int d[1001][11];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i <= 9; i++)
    {
        d[1][i] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                d[i][j] += d[i - 1][k];
                d[i][j] %= mod;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i <= 9; i++)
    {
        ans += d[n][i];
        ans %= mod;
    }
    cout << ans << '\n';

    return 0;
}