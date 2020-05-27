/**
 * @file 1764.cpp
 * @brief 듣보잡
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. set - binary search 으로 구현해봄 => 패스 (set 2개, vector 1개)
 * 2. set 1개, vector 1개로 다시 구현 (메모리 조금 더 작게, 시간 조금 더 적게)
 */

#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    string s;
    set<string> ss;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        ss.insert(s);
    }

    vector<string> v;
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        if (!ss.insert(s).second)
        {
            v.push_back(s);
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for (auto &s : v)
    {
        cout << s << '\n';
    }

    return 0;
}