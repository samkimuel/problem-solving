/**
 * @file 17404.cpp
 * @brief RGB거리 2
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 코드플러스 알고리즘 기초강의 1
 * ! 첫 집과 마지막 집은 이웃이다 -> 1번 집을 정해놓고 DP 수행
 * d[i][j] : i번집을 j색으로 칠할 때, 1~i번 집을 칠하는 비용의 최소값 (j-0:빨강,1:초록,2:파랑)
 */

#include <iostream>
#include <algorithm>

using namespace std;

int c[1001][3];
int d[1001][3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> c[i][j];
        }
    }

    int ans = 1000 * 1000 + 1;
    for (int k = 0; k < 3; k++) // 1번집 색
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == k)
            {
                d[1][j] = c[1][j];
            }
            else
            {
                d[1][j] = 1000 * 1000 + 1;
            }
        }

        for (int i = 2; i <= n; i++)
        {
            d[i][0] = min(d[i - 1][1], d[i - 1][2]) + c[i][0];
            d[i][1] = min(d[i - 1][0], d[i - 1][2]) + c[i][1];
            d[i][2] = min(d[i - 1][0], d[i - 1][1]) + c[i][2];
        }

        for (int j = 0; j < 3; j++)
        {
            if (j == k)
            {
                continue;
            }
            ans = min(d[n][j], ans);
        }
    }

    cout << ans << '\n';

    return 0;
}