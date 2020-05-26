/**
 * @file 1076.cpp
 * @brief 저항
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 자료형 주의!!! 겁나 주의
 * map으로 밖에 풀지 못하는 것인가..? -> 다른 풀이도 생각해보자
 */

#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, pair<int, long long>> m = {
        {"black", {0, 1}},
        {"brown", {1, 10}},
        {"red", {2, 100}},
        {"orange", {3, 1000}},
        {"yellow", {4, 10000}},
        {"green", {5, 100000}},
        {"blue", {6, 1000000}},
        {"violet", {7, 10000000}},
        {"grey", {8, 100000000}},
        {"white", {9, 1000000000}}};

    string f, s, t;
    cin >> f >> s >> t;

    long long ans = (m[f].first * 10 + m[s].first) * m[t].second;
    cout << ans << '\n';

    return 0;
}