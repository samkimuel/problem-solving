/**
 * @file 10250.cpp
 * @brief ACM 호텔
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. 더 깔끔하게 짤 수 없을까??? (0 붙이는 cout 너무 거슬림)
 * 2. 로직 코드를 더 줄일 수 있을 것 같은데...
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int h, w, n;
        cin >> h >> w >> n;

        int y = n % h;
        int x = n / h + 1;

        if (y == 0)
        {
            y = h;
            x -= 1;
        }

        cout << y;
        if (x < 10)
        {
            cout << 0 << x << '\n';
        }
        else
        {
            cout << x << '\n';
        }
    }

    return 0;
}