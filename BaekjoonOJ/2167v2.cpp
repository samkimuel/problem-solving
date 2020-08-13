/**
 * @file 2167v2.cpp
 * @brief 2차원 배열의 합
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * DP로 품
 * d[i][j] : 2차원배열 1,1부터 i,j까지의 합
 */

#include <iostream>

using namespace std;

int arr[301][301];
int d[301][301];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= m; b++)
        {
            cin >> arr[a][b];
            d[a][b] = d[a-1][b] + d[a][b-1] + arr[a][b] - d[a-1][b-1];
        }
    }
    
    int k;
    cin >> k;
    while (k--)
    {
        int i, j, x, y;
        cin >> i >> j >> x >> y;

        cout << d[x][y] - d[i-1][y] - d[x][j-1] + d[i-1][j-1] << '\n';
    }

    return 0;
}