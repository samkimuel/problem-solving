/**
 * @file 1676.cpp
 * @brief 팩토리얼 0의 개수
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 소인수분해
 * 0을 만드는 수 -> 10 -> 2*5 : 2와 5의 갯수 -> 2와 5의 갯수 중 적은 수 (5가 적을 수 밖에 없음)
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        ans += n / i;
    }

    cout << ans << '\n';

    return 0;
}