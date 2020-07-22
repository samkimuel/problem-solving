/**
 * @file 11054.cpp
 * @brief 가장 긴 바이토닉 부분 수열
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 코드플러스 알고리즘 기초강의1
 * 가장 긴 증가하는 수열 + 가장 긴 감소하는 수열
 * d1[i] : i에서 끝나는 가장 긴 증가하는 부분 수열
 * d2[i] : i에서 시작하는 가장 긴 감소하는 부분 수열
 */

#include <iostream>

using namespace std;

int a[1000];
int d1[1000], d2[1000];

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
        d1[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j] && d1[i] < d1[j] + 1)
            {
                d1[i] = d1[j] + 1;
            }
        }
    }

    // a[i]에서 시작
    for (int i = n - 1; i >= 0; i--)
    {
        d2[i] = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j] && d2[j] + 1 > d2[i])
            {
                d2[i] = d2[j] + 1;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans < d1[i] + d2[i] - 1)
        {
            ans = d1[i] + d2[i] - 1;
        }
    }
    cout << ans << '\n';

    return 0;
}