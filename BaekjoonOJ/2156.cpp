/**
 * @file 2156.cpp
 * @brief 포도주 시식
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[i] : i번째 포도주까지 먹었을 때 마실 수 있는 최대 포도주 양
 * 몇 일 전에 풀었던 계단 오르기 문제와 비슷해 보인다.
 * !계단 오르기는 최소 1칸은 반드시 올라가야 하지만, 포도주 시식의 경우 반드시 마실 필요는 없다.!
 */

#include <iostream>

using namespace std;

int w[10000];
int d[10000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    d[0] = w[0];
    d[1] = w[0] + w[1];
    d[2] = max(max(d[1], d[0] + w[2]), w[1] + w[2]); // w[0], w[1], w[2] 세 개만 놓고 봤을 때
    for (int i = 3; i < n; i++)
    {
        d[i] = max(max(d[i - 3] + w[i - 1] + w[i], d[i - 2] + w[i]), d[i - 1]);
    }

    cout << d[n - 1] << '\n';

    return 0;
}