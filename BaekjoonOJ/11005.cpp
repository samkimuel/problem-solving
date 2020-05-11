/**
 * @file 11005.cpp
 * @brief 진법 변환 2
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * reverse 함수(algorithm)
 * 
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b;
    cin >> n >> b;

    string ans = "";
    while (n > 0)
    {
        int r = n % b;
        if (r < 10)
        {
            ans += (char)(r + '0');
        }
        else
        {
            ans += (char)(r - 10 + 'A');
        }

        n /= b;
    }
    reverse(ans.begin(), ans.end());

    cout << ans << '\n';

    return 0;
}