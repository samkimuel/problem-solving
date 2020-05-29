/**
 * @file 12813.cpp
 * @brief 이진수 연산
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bitset<100000> a, b;

    cout << (a & b) << '\n';
    cout << (a | b) << '\n';
    cout << (a ^ b) << '\n';
    cout << ~(a) << '\n';
    cout << ~(b) << '\n';

    return 0;
}