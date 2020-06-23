/**
 * @file 2775.cpp
 * @brief 부녀회장이 될테야
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[i][j] : i층 j호에 사는 거주민 수
 * 2차원 배열 이용, BU 방식
 * 1. 1차원 배열로 만들 순 없을까? -> 메모리 줄일 수 있음
 * 2. TD 방식으로 만들 수 있지 않을까?
 */
#include <iostream>

using namespace std;

int d[15][15];

void getResidents()
{

    for (int x = 1; x <= 14; x++)
    {
        d[0][x] = x;
    }

    for (int i = 1; i <= 14; i++)
    {
        for (int j = 1; j <= 14; j++)
        {
            d[i][j] = d[i - 1][j] + d[i][j - 1];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    getResidents();

    while (t--)
    {
        int k, n;
        cin >> k >> n;

        cout << d[k][n] << '\n';
    }

    return 0;
}