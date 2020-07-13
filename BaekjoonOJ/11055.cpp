/**
 * @file 11055.cpp
 * @brief 가장 큰 증가하는 수열
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <algorithm>

using namespace std;

int a[1000];
int d[1000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        d[i] = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j] && d[i] < d[j] + a[i])
            {
                d[i] = d[j] + a[i];
            }
        }
    }

    int ans = *max_element(d, d + 1000);
    cout << ans << '\n';

    return 0;
}