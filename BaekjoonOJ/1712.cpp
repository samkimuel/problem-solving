/**
 * @file 1712.cpp
 * @brief 손익분기점
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if (b >= c)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << a / (c - b) + 1 << '\n';
    }

    return 0;
}