/**
 * @file 14430.cpp
 * @brief 자원 캐기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int g[301][301];
int dp[301][301];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> g[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + g[i][j];
        }
    }

    cout << dp[n][m] << '\n';

    return 0;
}