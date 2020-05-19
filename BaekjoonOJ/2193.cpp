/**
 * @file 2193.cpp
 * @brief 이친수(pinary number)
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[n][l] : n자리 이친수의 개수 중 l로 끝나는 것의 개수 (l=0, 1)
 * 
 * 자료형 long long 주의!
 * 
 * 다른 풀이
 * d[n] : n자리 이친수 개수
 * d[n] = d[n-1] + d[n-2]
 */

#include <iostream>

using namespace std;

long long d[91][2];

int main()
{
    int n;
    cin >> n;

    d[1][0] = 0;
    d[1][1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            d[i][j] += d[i - 1][0];
            if (j == 0)
            {
                d[i][j] += d[i - 1][1];
            }
        }
    }

    cout << d[n][0] + d[n][1] << '\n';

    return 0;
}