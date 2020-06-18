/**
 * @file 1008.cpp
 * @brief A/B
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << fixed;
    cout.precision(15);
    cout << (double)a / b << '\n';

    return 0;
}