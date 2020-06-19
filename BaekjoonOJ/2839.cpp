/**
 * @file 2839.cpp
 * @brief 설탕 배달
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 3x + 5y = n 일 때 x + y 최소값 (x >= 0, y >= 0)
 * 하나하나 차근차근
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int bag = 0;
    while (n > 0)
    {
        if (n % 5 == 0)
        {
            bag += n / 5;
            n %= 5;
            break;
        }

        n -= 3;
        bag++;
    }

    n == 0 ? cout << bag : cout << -1;
    cout << '\n';

    return 0;
}