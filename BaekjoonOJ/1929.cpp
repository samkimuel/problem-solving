/**
 * @file 1929.cpp
 * @brief 소수 구하기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 에라토스테네스의 체(Sieve of Eratosthenes) - O(NloglogN)
 */

#include <iostream>

using namespace std;

const int MAX = 1000000;
bool check[MAX + 1];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    check[0] = check[1] = true;
    for (int i = 2; i <= MAX; i++)
    {
        if (check[i] == false)
        {
            for (int j = i * 2; j <= MAX; j += i)
            {
                check[j] = true;
            }
        }
    }

    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (check[i] == false)
        {
            cout << i << '\n';
        }
    }

    return 0;
}