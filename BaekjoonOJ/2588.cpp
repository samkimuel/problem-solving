/**
 * @file 2588.cpp
 * @brief 곱셈
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int b3 = b / 100;
    int b2 = (b % 100) / 10;
    int b1 = b % 10;

    int three = a * b1;
    int four = a * b2;
    int five = a * b3;

    cout << three << '\n';
    cout << four << '\n';
    cout << five << '\n';
    cout << a * b << '\n';

    return 0;
}