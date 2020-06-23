/**
 * @file 2775v2.cpp
 * @brief 부녀회장이 될테야
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1차원 배열, 좀 더 수학적으로
 */
#include <iostream>

using namespace std;

int d[15];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int k, n;
        cin >> k >> n;

        for (int i = 1; i <= n; i++)
        {
            d[i] = i;
        }

        for (int i = 0; i < k; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                d[j] += d[j - 1];
            }
        }

        cout << d[n] << '\n';
    }

    return 0;
}