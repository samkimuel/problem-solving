/**
 * @file 2609.cpp
 * @brief 최대공약수와 최소공배수
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

// int gcd(int x, int y)
// {
//     while (y != 0)
//     {
//         int r = x % y;
//         x = y;
//         y = r;
//     }
//     return x;
// }

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}

int lcm(int x, int y)
{
    return x * y / gcd(x, y);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << '\n';
    cout << lcm(a, b) << '\n';

    return 0;
}