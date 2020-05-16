/**
 * @file 11726TD.cpp
 * @brief 2xn 타일링
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[n] = d[n-1] + d[n-2]
 * mod 안 넣으면 틀림!!
 */

#include <iostream>

using namespace std;

int d[1001] = {1, 1};
int mod = 10007;

// Top-Down
int tiling(int n)
{
    if (d[n] > 0)
    {
        return d[n];
    }
    d[n] = tiling(n - 1) + tiling(n - 2);
    d[n] %= mod;
    return d[n];
}

int main()
{
    int n;
    cin >> n;

    cout << tiling(n) << '\n';

    return 0;
}