/**
 * @file 9465.cpp
 * @brief 스티커
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[n][m] : 2xn 스티커를 띠었을 때 얻을 수 있는 최대 점수, n번째 열에서 뜯는 방식은 m. (m :0 - 뜯지 않음, 1 - 위쪽, 2 - 아래쪽
 * s[n][m] : n열 m행 스티커 점수 (m : 0 위쪽, 1 아래쪽)
 * 
 * m이 0일 때(뜯지 않는 경우)도 경우의 수에 포함
 */

#include <iostream>
#include <algorithm>

using namespace std;

int n;
int s[100001][2];
int d[100001][3];

void input()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i][0];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> s[i][1];
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
        input();

        d[0][0] = 0;
        d[0][1] = s[0][0];
        d[0][2] = s[0][1];
        for (int i = 1; i < n; i++)
        {
            d[i][0] = max({d[i - 1][0], d[i - 1][1], d[i - 1][2]});
            d[i][1] = max(d[i - 1][0], d[i - 1][2]) + s[i][0];
            d[i][2] = max(d[i - 1][0], d[i - 1][1]) + s[i][1];
        }

        cout << max({d[n - 1][0], d[n - 1][1], d[n - 1][2]}) << '\n';
    }

    return 0;
}