/**
 * @file 1463BU.cpp
 * @brief 1로 만들기 (Bottom-Up)
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int d[1000001];

void makeOne(int n)
{
    d[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1] + 1;
        if (i % 2 == 0 && d[i] > d[i / 2] + 1)
        {
            d[i] = d[i / 2] + 1;
        }
        if (i % 3 == 0 && d[i] > d[i / 3] + 1)
        {
            d[i] = d[i / 3] + 1;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    makeOne(n);
    
    cout << d[n] << '\n';

    return 0;
}