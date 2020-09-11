/**
 * @file 1091.cpp
 * @brief 수 나열하기3
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    long long int a, m, d, n;
    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
    for (int i = 0; i < n - 1; i++)
    {
        a = a * m + d;
    }
    printf("%lld\n", a);

    return 0;
}