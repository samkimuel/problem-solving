/**
 * @file 9095.cpp
 * @brief 1, 2, 3 더하기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[i] : i를 1, 2, 3의 합으로 나타내는 방법의 수
 */

#include <iostream>

using namespace std;

int d[11];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    d[0] = 1;
    for (int i = 1; i <= 10; i++)
    {
        if (i - 1 >= 0)
        {
            d[i] += d[i - 1];
        }
        if (i - 2 >= 0)
        {
            d[i] += d[i - 2];
        }
        if (i - 3 >= 0)
        {
            d[i] += d[i - 3];
        }
    }

    while (t--)
    {
        int n;
        cin >> n;

        cout << d[n] << '\n';
    }

    return 0;
}