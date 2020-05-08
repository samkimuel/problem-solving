/**
 * @file 6588.cpp
 * @brief 골드바흐의 추측
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 에라토스테네스의 체
 * 
 * 17105 - 골드바흐 트리플 풀어볼 것
 */

#include <iostream>

using namespace std;

const int MAX = 1000000;
int prime[MAX];
int pn;
bool check[MAX + 1];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 소수 구하기
    for (int i = 2; i <= MAX; i++)
    {
        if (check[i] == false)
        {
            prime[pn++] = i;
            for (int j = i + i; j <= MAX; j += i)
            {
                check[j] = true;
            }
        }
    }

    bool isGoldbachTrue = false;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        for (int i = 1; i < pn; i++)
        {
            if (check[n - prime[i]] == false)
            {
                cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
                isGoldbachTrue = true;
                break;
            }
        }
    }

    if (!isGoldbachTrue)
    {
        cout << "Goldbach's conjecture is wrong." << '\n';
    }

    return 0;
}