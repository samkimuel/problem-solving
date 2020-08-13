/**
 * @file 2167.cpp
 * @brief 2차원 배열의 합
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 하나씩 다 더하는 거로 구함 -> 통과는 했지만 시간이 많이 걸림
 * v2 DP로 풀기
 */

#include <iostream>

using namespace std;

int arr[301][301];

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
        }
        
    }

    int k;
    cin >> k;
    
    
    for (int a = 1; a <= k; a++)
    {
        int i, j, x, y;
        cin >> i >> j >> x >> y;

        int ans = 0;    
        for (int b = i; b <= x; b++)
        {
            for (int c = j; c <= y; c++)
            {
                ans += arr[b][c];
            }   
        }

        cout << ans << '\n';
    }

    return 0;
}