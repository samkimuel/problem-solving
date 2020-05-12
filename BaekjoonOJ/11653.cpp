/**
 * @file 11653.cpp
 * @brief 소인수분해
 * @author Sam Kim (samkim2626@gmail.com)
 * https://www.acmicpc.net/problem/11653
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << '\n';
            n /= i;
        }
    }

    if (n > 1)
    {
        cout << n << '\n';
    }

    return 0;
}