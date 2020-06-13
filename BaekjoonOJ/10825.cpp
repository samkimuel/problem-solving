/**
 * @file 10826.cpp
 * @brief 국영수
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

bool cmp(const tuple<string, int, int, int> &u, const tuple<string, int, int, int> &v)
{
    if (get<1>(u) == get<1>(v) && get<2>(u) == get<2>(v) && get<3>(u) == get<3>(v))
    {
        return get<0>(u) < get<0>(v);
    }
    else if (get<1>(u) == get<1>(v) && get<2>(u) == get<2>(v))
    {
        return get<3>(u) > get<3>(v);
    }
    else if (get<1>(u) == get<1>(v))
    {
        return get<2>(u) < get<2>(v);
    }
    return get<1>(u) > get<1>(v);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<tuple<string, int, int, int>> v;
    while (n--)
    {
        string s;
        int k, e, m;

        cin >> s >> k >> e >> m;

        tuple<string, int, int, int> t = make_tuple(s, k, e, m);
        v.push_back(t);
    }
    sort(v.begin(), v.end(), cmp);

    for (auto &i : v)
    {
        cout << get<0>(i) << '\n';
    }

    return 0;
}