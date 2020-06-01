/**
 * @file 10807.cpp
 * @brief 개수 세기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * algorithm - count 함수
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

    vector<int> vec;
    while (n--)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    int v;
    cin >> v;

    cout << count(vec.begin(), vec.end(), v) << '\n';

    return 0;
}