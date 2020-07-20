/**
 * @file 11722.cpp
 * @brief 가장 긴 감소하는 부분 수열
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 코드플러스 알고리즘 기초강의 1
 */

#include <iostream>
#include <algorithm>

using namespace std;

int a[1001];
int d[1001];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        d[i] = 1;
        for (int j = 1; j <= i; j++)
        {
            if (a[i] < a[j] && d[i] < d[j] + 1)
            {
                d[i] = d[j] + 1;
            }
        }
    }

    int ans = *max_element(d, d + n + 1);

    cout << ans << '\n';

    return 0;
}