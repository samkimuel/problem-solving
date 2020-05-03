/**
 * @file 1934.cpp
 * @brief 최소공배수
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << a * b / gcd(a, b) << '\n';
    }

    return 0;
}