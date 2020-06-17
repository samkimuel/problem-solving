/**
 * @file 10818.cpp
 * @brief 최소, 최대
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * algorithm - min, max
 */

#include <iostream>
#include <algorithm>

using namespace std;

int num[1000000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    auto iMin = min_element(num, num + n);
    auto iMax = max_element(num, num + n);
    cout << *iMin << ' ' << *iMax << '\n';

    return 0;
}