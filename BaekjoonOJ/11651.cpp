/**
 * @file 11651.cpp
 * @brief 좌표 정렬하기 2
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

    int n;
    cin >> n;

    vector<pair<int, int>> v;
    while (n--)
    {
        int x, y;
        cin >> x >> y;

        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), [](const pair<int, int> &u, const pair<int, int> &v) {
        // return make_pair(u.second, u.first) < make_pair(v.second, v.first);
        if (u.second == v.second)
            return u.first < v.first;
        return u.second < v.second;
        // return u.second < v.second || (u.second == v.second && u.first < v.first);
    });

    for (auto &i : v)
    {
        cout << i.first << ' ' << i.second << '\n';
    }

    return 0;
}