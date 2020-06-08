/**
 * @file 1181.cpp
 * @brief 단어 정렬
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. sort 2. unique 3. erase
 * 정렬하지 않고 unique 하게 되면 아무런 변화가 없음. 연속된 중복 원소를 vector의 제일 뒷부분에 쓰레기값(?)으로 보내버리기 때문
 * unique() return 값은 vector 쓰레기값의 첫 번째 위치
 * erase(a, b) : a, b는 위치. a부터 b까지 element 제거
 * 
 * pair를 이용한 람다 정렬 -> 먼저 문자열 길이로, 그 다음 사전순
 */

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> v;
    while (n--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), [](const string &x, const string y) {
        return make_pair(x.length(), x) < make_pair(y.length(), y);
    });

    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());

    for (auto &i : v)
    {
        cout << i << '\n';
    }

    return 0;
}