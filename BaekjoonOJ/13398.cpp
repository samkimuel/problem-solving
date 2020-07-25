/**
 * @file 13398.cpp
 * @brief 연속합 2
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * O(n^2) 이면 시간 초과, O(N)으로 풀어야 한다.
 * 
 * 수열에서 수를 하나 제거할 수 있는 경우를 생각 -> i번째 수에서 끝나는 최대 연속합, i번째 수에서 시작하는 최대 연속합
 */

#include <iostream>
#include <algorithm>

using namespace std;

int a[100000];
int dl[100000], dr[100000];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        dl[i] = a[i];
        if (i == 0)
        {
            continue;
        }
        if (dl[i] < dl[i - 1] + a[i])
        {
            dl[i] = dl[i - 1] + a[i];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        dr[i] = a[i];
        if (i == (n - 1))
        {
            continue;
        }
        if (dr[i] < dr[i + 1] + a[i])
        {
            dr[i] = dr[i + 1] + a[i];
        }
    }

    int ans = *max_element(dl, dl + 100000);

    for (int i = 1; i < n - 1; i++)
    {
        if (ans < dl[i - 1] + dr[i + 1])
        {
            ans = dl[i - 1] + dr[i + 1];
        }
    }
    cout << ans << '\n';

    return 0;
}