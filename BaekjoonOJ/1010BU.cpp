/**
 * @file 1010BU.cpp
 * @brief 다리 놓기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 문제 보자마자 조합(Combination)이 생각남
 * BU방식으로 품 -> TD 으로 푸는 게 더 쉬울 듯
 * 
 * d[n][m] : 강 서쪽 n개 사이트와 강 동쪽 m개 사이트를 다리로 연결하는 경우의 수
 */

#include <iostream>

using namespace std;

int d[30][30];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    d[0][0] = d[0][1] = d[1][0] = 0;
    for (int i = 1; i < 30; i++)
    {
        d[1][i] = i;
    }

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 2; i <= n; i++)
        {
            for (int j = i; j <= m; j++)
            {
                d[i][j] = d[i - 1][j - 1] + d[i][j - 1];
            }
        }

        cout << d[n][m] << '\n';
    }

    return 0;
}