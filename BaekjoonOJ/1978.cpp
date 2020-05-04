/**
 * @file 1978.cpp
 * @brief 소수 찾기
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

bool prime(int a)
{
    if (a < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int cnt = 0;
    while (n--)
    {
        int num;
        cin >> num;

        if (prime(num))
        {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}