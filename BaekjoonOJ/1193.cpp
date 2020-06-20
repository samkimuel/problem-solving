/**
 * @file 1193.cpp
 * @brief 분수찾기
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    int i;
    int sum = 0;
    for (i = 1; sum < x; i++)
    {
        sum += i;
    }

    if (i % 2 == 0)
    {
        cout << sum - x + 1 << '/' << i - (sum - x + 1) << '\n';
    }
    else
    {
        cout << i - (sum - x + 1) << '/' << sum - x + 1 << '\n';
    }

    return 0;
}