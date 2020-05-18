/**
 * @file 16194.cpp
 * @brief 카드 구매하기 2
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[n] : 카드 n개 구매하는 최소 비용
 * !주의할 점! "배열의 초기값"
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> d(n + 1, -1); // 주의

    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }

    d[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (d[i] == -1 || d[i] > d[i - j] + p[j])
            {
                d[i] = d[i - j] + p[j];
            }
        }
    }

    cout << d[n] << '\n';

    return 0;
}