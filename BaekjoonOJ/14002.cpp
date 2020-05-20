/**
 * @file 14002.cpp
 * @brief 가장 긴 증가하는 부분 수열 4
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * +역추적
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[1001], d[1001], v[1001];

void go(int p)
{
    if (p == 0)
    {
        return;
    }
    go(v[p]);
    cout << a[p] << ' ';
}

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
        d[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if (a[i] > a[j] && d[i] < d[j] + 1)
            {
                d[i] = d[j] + 1;
                v[i] = j;
            }
        }
    }

    int ans = d[0];
    int p = 0;
    for (int i = 1; i <= n; i++)
    {
        if (ans < d[i])
        {
            ans = d[i];
            p = i;
        }
    }
    cout << ans << '\n';
    go(p);
    cout << '\n';

    return 0;
}