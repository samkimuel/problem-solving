/**
 * @file 10814.cpp
 * @brief 나이순 정렬
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * stable_sort : 정렬 전 순서 유지됨 (입력 순서로 저장된 데이터 순)
 */

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>

using namespace std;

bool cmp(const pair<int, string> &u, const pair<int, string> &v)
{
    return u.first < v.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, string>> v;

    for (int i = 0; i < n; i++)
    {
        int age;
        string name;
        cin >> age >> name;

        v.push_back(make_pair(age, name));
    }

    stable_sort(v.begin(), v.end(), cmp);

    for (auto &i : v)
    {
        cout << i.first << ' ' << i.second << '\n';
    }

    return 0;
}