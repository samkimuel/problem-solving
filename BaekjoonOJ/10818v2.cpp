/**
 * @file 10818v2.cpp
 * @brief 최소, 최대
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 매 입력마다 min-max 구하기 -> 메모리적고 시간도 좀더 빠르다
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int mn = 1000001;
    int mx = -mn;

    while (n--)
    {
        int num;
        cin >> num;

        mn = min(mn, num);
        mx = max(mx, num);
    }

    cout << mn << ' ' << mx << '\n';

    return 0;
}