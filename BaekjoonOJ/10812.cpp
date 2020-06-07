/**
 * @file 10812.cpp
 * @brief 바구니 순서 바꾸기
 * @author Sam Kim (samkim2626@gmail.com)
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
        int i, j, k;
        cin >> i >> j >> k;

        rotate(v.begin() + i - 1, v.begin() + k - 1, v.begin() + j);
    }

    for (int x = 0; x < n; x++)
    {
        cout << v[x] << ' ';
    }

    return 0;
}