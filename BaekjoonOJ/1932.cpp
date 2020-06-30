/**
 * @file 1932.cpp
 * @brief 정수 삼각형
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * DP
 * 
 * d[i][j] : i번째열의 j번째 수까지 경로의 최대합
 * 
 * 문제를 쉽게 풀려고 2차원 배열로 풀었는데 삼각형이라 쓸모없는 메모리 낭비를 하고 있다
 * -> 메모리 줄이려면??? 어떻게???
 */

#include <iostream>
#include <algorithm>

using namespace std;

int t[500][500];
int d[500][500];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> t[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                d[i][j] = d[i - 1][j] + t[i][j];
            }
            else if (j == i)
            {
                d[i][j] = d[i - 1][j - 1] + t[i][j];
            }
            else
            {
                d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + t[i][j];
            }
        }
    }

    // 최대값 구하기
    int max = d[n - 1][0];
    for (int i = 1; i < n; i++)
    {
        if (d[n - 1][i] > max)
        {
            max = d[n - 1][i];
        }
    }
    cout << max << '\n';

    return 0;
}