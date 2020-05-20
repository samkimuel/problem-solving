/**
 * @file 10870.cpp
 * @brief 피보나치 수 5
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int f[21] = {0, 1};

int fibonacci(int n)
{
    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << fibonacci(n) << '\n';

    return 0;
}