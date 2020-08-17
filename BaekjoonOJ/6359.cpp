/**
 * @file 6359.cpp
 * @brief 만취한 상범
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * DP로 푼 것 같지 않아서 더 생각해봐야겠다.
 */

#include <iostream>
#include <algorithm>

using namespace std;

bool a[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 1; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j += i)
        {
            a[j] = !a[j];
        }
    }

    while (t--)
    {
        int n;
        cin >> n;

        cout << count(a + 1, a + n + 1, 1) << '\n';
    }

    return 0;
}