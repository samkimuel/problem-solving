/**
 * @file 11053.cpp
 * @brief 가장 긴 증가하는 부분 수열 (LIS)
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[i] : a[1], ... ,a[i] 까지 수열이 있을 때, a[i]을 마지막으로 하는 가장 긴 증가하는 부분 수열의 길이
 * d[1]~d[n] 중 최대값
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> d(n);
    for (int i = 0; i < n; i++)
    {
        d[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j] && d[i] < d[j] + 1)
            {
                d[i] = d[j] + 1;
            }
        }
    }

    cout << *max_element(d.begin(), d.end()) << '\n';

    return 0;
}