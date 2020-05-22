/**
 * @file 1699.cpp
 * @brief 제곱수의 합
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[i] : i를 제곱수의 합으로 나타냈을 때, 필요한 항의 최소 개수 O(N*√N)
 * (방법의 수 : d[n] = ∑d[n-i^2] (i<=√n))
 */

#include <iostream>

using namespace std;

int d[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        d[i] = i; // 항의 최대 개수
        for (int j = 1; j * j <= i; j++)
        {
            if (d[i] > d[i - j * j] + 1)
            {
                d[i] = d[i - j * j] + 1;
            }
        }
    }

    cout << d[n] << '\n';

    return 0;
}