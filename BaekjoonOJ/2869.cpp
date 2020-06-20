/**
 * @file 2869.cpp
 * @brief 달팽이는 올라가고 싶다
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, v;
    cin >> a >> b >> v;

    int days = (v - a) / (a - b);
    if ((v - a) % (a - b) == 0)
    {
        cout << days + 1 << '\n';
    }
    else
    {
        cout << days + 2 << '\n';
    }

    return 0;
}