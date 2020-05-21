/**
 * @file 1912.cpp
 * @brief 연속합
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[i] : i번째 수로 끝나는 가장 큰 연속합
 */

#include <iostream>

using namespace std;

int d[100001];
int a[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        d[i] = a[i];
        if (d[i] < d[i - 1] + a[i])
        {
            d[i] = d[i - 1] + a[i];
        }
    }

    int ans = d[1];
    for (int i = 1; i <= n; i++)
    {
        if (ans < d[i])
        {
            ans = d[i];
        }
    }

    cout << ans << '\n';

    return 0;
}