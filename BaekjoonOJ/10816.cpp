/**
 * @file 10816.cpp
 * @brief 숫자 카드 2
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 중복 이진트리 - 중복값 카운팅을 어떻게 해야할까?
 * 1. 중복입력 가능하기 때문에 multiset -> count 함수 => 시간초과
 * 2. vector -> sort -> lower_bound, upper_bound(algorithm) => 패스
 * 
 * 3. array로 푼다면 실행시간은?? (풀어볼 것)
 * 
 * lower_bound, upper_bound 함수 개념
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v;
    while (n--)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    int m;
    cin >> m;
    while (m--)
    {
        int num2;
        cin >> num2;

        auto low = lower_bound(v.begin(), v.end(), num2) - v.begin();
        auto upper = upper_bound(v.begin(), v.end(), num2) - v.begin();
        cout << upper - low << ' ';
    }
    cout << '\n';

    return 0;
}