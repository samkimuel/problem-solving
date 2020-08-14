/**
 * @file 11048.cpp
 * @brief 이동하기
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <algorithm>

using namespace std;

int c[1001][1001];
int d[1001][1001];

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
            cin >> c[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            d[i][j] = max({d[i - 1][j], d[i][j - 1], d[i - 1][j - 1]}) + c[i][j];
        }
    }

    cout << d[n][m] << '\n';

    return 0;
}