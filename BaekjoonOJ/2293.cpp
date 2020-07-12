/**
 * @file 2293.cpp
 * @brief 동전 1
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[k] : k원을 만드는 경우의 수
 */

#include <iostream>

using namespace std;

int c[100];
int d[10001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    d[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = c[i]; j <= k; j++)
        {
            d[j] += d[j - c[i]];
        }
    }

    cout << d[k] << '\n';

    return 0;
}