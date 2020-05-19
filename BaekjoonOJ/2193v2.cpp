/**
 * @file 2193v2.cpp
 * @brief 이친수(다른 풀이)
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

long long d[91];

int main()
{
    int n;
    cin >> n;

    d[1] = 1;
    d[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i - 2];
    }

    cout << d[n] << '\n';

    return 0;
}