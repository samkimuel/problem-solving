/**
 * @file 2225v2.cpp
 * @brief 합분해
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 코드플러스 알고리즘 기초강의 1 복습
 * d[k][n] : 0부터 n까지의 정수 k개를 더해서 그 합이 n이 되는 경우의 수
 * 전에 풀었던 방식은 O(KN^2), 이 방식은 O(KN)
 * 
 * D[K][N] = ∑D[K-1][L] (0<=L<=N) : O(KN^2)
 * 1. D[K][N] = D[K-1][0] + ... + D[K-1][N]
 * 2. D[K][N-1] = D[K-1][0] + ... + D[K-1][N-1]
 * 3. 1,2 => D[K][N] = D[K][N-1] + D[k-1][N] : O(KN)
 * 
 * 어떻게든 풀어도 제한시간 내에 가능하지만, 이 방식이 실행시간이 훠얼씬 더 빠르다.(효율적)
 */

#include <iostream>

using namespace std;

long long d[201][201];
long long mod = 1000000000;

int main()
{
    int n, k;
    cin >> n >> k;

    d[0][0] = 1LL;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            d[i][j] = d[i - 1][j]; // d[k][0] = 1
            if (j >= 1)
                d[i][j] += d[i][j - 1];
            d[i][j] %= mod;
        }
    }

    cout << d[k][n] << '\n';

    return 0;
}