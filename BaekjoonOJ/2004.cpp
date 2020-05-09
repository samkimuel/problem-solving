/**
 * @file 2004.cpp
 * @brief 조합 0의 개수
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * nCm 소인수분해 -> 2와 5의 개수 중 적은 것
 * nCm = nPm / m! ( nPm = n(n-1)(n-2)....n-(m-1) = n!/(n-m)! )
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    long long nTwo = 0, nFive = 0;

    // 2의 개수
    for (long long i = 2; i <= n; i *= 2)
    {
        nTwo += n / i;
    }
    for (long long i = 2; i <= n - m; i *= 2)
    {
        nTwo -= (n - m) / i;
    }
    for (long long i = 2; i <= m; i *= 2)
    {
        nTwo -= m / i;
    }

    // 5의 개수
    for (long long i = 5; i <= n; i *= 5)
    {
        nFive += n / i;
    }
    for (long long i = 5; i <= n - m; i *= 5)
    {
        nFive -= (n - m) / i;
    }

    for (long long i = 5; i <= m; i *= 5)
    {
        nFive -= m / i;
    }

    cout << min(nTwo, nFive) << '\n';

    return 0;
}