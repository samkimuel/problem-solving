/**
 * @file 2163v2.cpp
 * @brief 초콜릿 자르기
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int d[301][301];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    d[1][1] = 0;
    for (int i = 2; i <= n; i++)
    {
        d[i][1] = i - 1;
    }

    for (int i = 2; i <= m; i++)
    {
        d[1][i] = i - 1;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= m; j++)
        {
            // 비교하긴 했지만 횟수는 똑같다...
            d[i][j] = min(d[i][j - 1] + i, d[i - 1][j] + j);
        }
    }

    cout << d[n][m] << '\n';

    return 0;
}