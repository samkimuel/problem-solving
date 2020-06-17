/**
 * @file 10817.cpp
 * @brief 세 수
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * algorithm 이용했지만, 세 정수만 취급하기 때문에 그냥 if 문으로 풀어도 됨
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[3];
    cin >> n[0] >> n[1] >> n[2];

    sort(n, n + 3);

    cout << n[1] << '\n';

    return 0;
}