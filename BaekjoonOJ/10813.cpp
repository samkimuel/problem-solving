/**
 * @file 10813.cpp
 * @brief 공 바꾸기
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
        int i, j;
        cin >> i >> j;

        swap(v[i - 1], v[j - 1]); // 범위가 아닌 선택
    }

    for (int x = 0; x < n; x++)
    {
        cout << v[x] << ' ';
    }

    return 0;
}