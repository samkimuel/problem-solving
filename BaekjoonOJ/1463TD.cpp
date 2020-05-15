/**
 * @file 1463TD.cpp
 * @brief 1로 만들기 (Top-Down)
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int d[1000001];

int makeOne(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (d[n] > 0)
    {
        return d[n];
    }

    d[n] = makeOne(n - 1) + 1;

    if (n % 2 == 0)
    {
        int tmp = makeOne(n / 2) + 1;
        if (d[n] > tmp)
        {
            d[n] = tmp;
        }
    }
    if (n % 3 == 0)
    {
        int tmp = makeOne(n / 3) + 1;
        if (d[n] > tmp)
        {
            d[n] = tmp;
        }
    }

    return d[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << makeOne(n) << '\n';

    return 0;
}