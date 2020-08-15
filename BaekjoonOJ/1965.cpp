/**
 * @file 1965.cpp
 * @brief 상자넣기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * LIS(최장 증가 수열) 문제 - 기본 개념 문제
 * 
 * d[i] : i번째 수(a[i])를 마지막 원소로 가지는 가장 긴 증가하는 부분 수열의 길이
 * 
 * 이 방법은 O(N^2), N이 10만이 이상이면 어떻게 해야할까?
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
        d[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j] && d[j] + 1 > d[i])
            {
                d[i] = d[j] + 1;
            }
        }
    }

    cout << *max_element(d, d + n) << '\n';

    return 0;
}