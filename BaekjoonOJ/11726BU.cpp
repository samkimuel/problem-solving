/**
 * @file 11726BU.cpp
 * @brief 2xn 타일링
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[n] = d[n-1] + d[n-2]
 */

#include <iostream>

using namespace std;

int d[1001];
int mod = 10007;

int main()
{
    int n;
    cin >> n;

    d[0] = 1;
    d[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i - 2];
        d[i] %= mod;
    }

    cout << d[n] << '\n';

    return 0;
}