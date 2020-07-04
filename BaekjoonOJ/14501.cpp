/**
 * @file 14501.cpp
 * @brief 퇴사
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 다른 분들 풀이 참고함. 리뷰할 것!
 * 시간복잡도가 O(N)인 풀이
 * 
 * d[i] : i일까지 일해서 얻을 수 있는 최대 이익 (i번째 날에 일을 할 수도, 안 할 수도 있음)
 */

#include <iostream>
#include <algorithm>

using namespace std;

int t[16];
int p[16];
int d[16];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> t[i] >> p[i];
    }

    for (int i = 1; i <= n; i++)
    {
        d[i] = max(d[i - 1], d[i]);

        if (i + t[i] - 1 <= n)
        {
            d[i + t[i] - 1] = max(d[i + t[i] - 1], d[i - 1] + p[i]);
        }
    }

    cout << d[n] << '\n';

    return 0;
}