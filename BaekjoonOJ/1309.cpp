/**
 * @file 1309.cpp
 * @brief 동물원
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 코드플러스 알고리즘 기초강의1
 * 
 * d[n][m] : 2*n배열에 사자를 배치하는 경우의 수. m은 n번째 줄의 배치 종류(0:배치하지 않음, 1:왼쪽에만, 2: 오른쪽에만)
 */

#include <iostream>

using namespace std;

int mod = 9901;
int d[100001][3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    d[0][0] = 1; // 사자를 한 마리도 배치하지 않는 경우의 수
    for (int i = 1; i <= n; i++)
    {
        d[i][0] = d[i - 1][0] + d[i - 1][1] + d[i - 1][2];
        d[i][1] = d[i - 1][0] + d[i - 1][2];
        d[i][2] = d[i - 1][0] + d[i - 1][1];

        for (int j = 0; j < 3; j++)
        {
            d[i][j] %= mod;
        }
    }

    cout << (d[n][0] + d[n][1] + d[n][2]) % mod << '\n';

    return 0;
}