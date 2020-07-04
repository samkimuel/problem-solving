/**
 * @file 2163.cpp
 * @brief 초콜릿 자르기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 개수는 공식으로 만들어서 바로 풀 수 있다.
 * 그런데 DP로 풀고 싶어서 고민했다.
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    cout << n * m - 1 << '\n';

    return 0;
}