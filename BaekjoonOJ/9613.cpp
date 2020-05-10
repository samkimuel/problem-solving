/**
 * @file 9613.cpp
 * @brief GCD 합
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * sum 자료형 long long!!
 */

#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        long long sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum += gcd(num[i], num[j]);
            }
        }

        cout << sum << '\n';
    }

    return 0;
}