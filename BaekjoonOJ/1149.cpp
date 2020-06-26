/**
 * @file 1149.cpp
 * @brief RGB거리
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * cost[i][j] : i번째 집의 j(0:빨, 1:초, 2:파)색에 따른 칠 비용
 * d[i][j] : i번째 집까지 칠하는 최소 비용, i번째 집의 색은 j
 */

#include <iostream>
#include <algorithm>

using namespace std;

int cost[1000][3];
int d[1000][3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> cost[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        d[0][i] = cost[0][i];
    }

    for (int i = 1; i < n; i++)
    {
        d[i][0] = min(d[i - 1][1], d[i - 1][2]) + cost[i][0];
        d[i][1] = min(d[i - 1][0], d[i - 1][2]) + cost[i][1];
        d[i][2] = min(d[i - 1][0], d[i - 1][1]) + cost[i][2];
    }

    cout << min(min(d[n - 1][0], d[n - 1][1]), d[n - 1][2]) << '\n';

    return 0;
}