/**
 * @file 10811.cpp
 * @brief 바구니 뒤집기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * reverse 함수 : iterator 매개변수 [first, last) 범위 요소 거꾸로 뒤집음
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> v;

    for (int x = 1; x <= n; x++)
    {
        v.push_back(x);
    }

    while (m--)
    {
        int i, j;
        cin >> i >> j;
        reverse(v.begin() + i - 1, v.begin() + j);
    }

    for (int x = 0; x < n; x++)
    {
        cout << v[x] << ' ';
    }

    return 0;
}