/**
 * @file 2292BU.cpp
 * @brief 벌집
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 규칙 찾아서 점차적으로
 */
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int sum = 1, i = 0;
    while (sum < n)
    {
        sum += 6 * (i++);
    }

    n == 1 ? cout << 1 : cout << i;
    cout << '\n';

    return 0;
}