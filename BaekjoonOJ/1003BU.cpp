/**
 * @file 1003BU.cpp
 * @brief 피보나치 함수
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1차원 배열로 생각해 볼 순 없을까?
 */

#include <iostream>

using namespace std;

int d[41][2];

void getZeroNOne()
{
    d[0][0] = 1;
    d[0][1] = 0;
    d[1][0] = 0;
    d[1][1] = 1;

    for (int i = 2; i < 41; i++)
    {
        d[i][0] = d[i - 1][0] + d[i - 2][0];
        d[i][1] = d[i - 1][1] + d[i - 2][1];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    getZeroNOne();

    while (t--)
    {
        int n;
        cin >> n;

        cout << d[n][0] << ' ' << d[n][1] << '\n';
    }

    return 0;
}