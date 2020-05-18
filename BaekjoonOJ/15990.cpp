/**
 * @file 15990.cpp
 * @brief 1, 2, 3 더하기 5
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[i][j] : i를 1, 2, 3의 합으로 나타내는 방법의 수. 마지막 사용한 수는 j
 * !주의할 점! d[0] = 1 초기화 하면 중복 발생 -> 예외 처리
 */

#include <iostream>

using namespace std;

long long d[100001][4];
long long mod = 1000000009LL;
int limit = 100000;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i <= limit; i++)
    {
        if (i - 1 >= 0)
        {
            d[i][1] = d[i - 1][2] + d[i - 1][3];
            if (i == 1)
            {
                d[i][1] = 1;
            }
        }
        if (i - 2 >= 0)
        {
            d[i][2] = d[i - 2][1] + d[i - 2][3];
            if (i == 2)
            {
                d[i][2] = 1;
            }
        }
        if (i - 3 >= 0)
        {
            d[i][3] = d[i - 3][1] + d[i - 3][2];
            if (i == 3)
            {
                d[i][3] = 1;
            }
        }

        d[i][1] %= mod;
        d[i][2] %= mod;
        d[i][3] %= mod;
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << (d[n][1] + d[n][2] + d[n][3]) % mod << '\n';
    }

    return 0;
}