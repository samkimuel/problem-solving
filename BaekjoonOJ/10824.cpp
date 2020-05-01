/**
 * @file 10824.cpp
 * @brief 네 수
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. stoi, stol, stoll 함수
 * 2. 자료형 long long
 * ps. printf("%lld");
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << stoll(to_string(a) + to_string(b)) + stoll(to_string(c) + to_string(d)) << '\n';

    return 0;
}