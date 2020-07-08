/**
 * @file 1010TD.cpp
 * @brief 다리 놓기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * TD방식으로 조합(Combination) 풀기
 * Memoization 안하면 시간 초과 -> 꼭 넣기
 */

#include <iostream>

using namespace std;

int d[30][30];

int combination(int n, int m)
{
    if (n == m || n == 0)
    {
        return 1;
    }
    if (d[n][m] > 0)
        return d[n][m];

    return d[n][m] = combination(n - 1, m - 1) + combination(n, m - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        cout << combination(n, m) << '\n';
    }

    return 0;
}