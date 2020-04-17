/**
 * @file 10950.cpp
 * @brief A+B - 3
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}