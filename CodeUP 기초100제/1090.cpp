/**
 * @file 1090.cpp
 * @brief 수 나열하기2
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int a, r, n;
    scanf("%d %d %d", &a, &r, &n);

    long long int res = a;
    for (int i = 0; i < n - 1; i++)
    {
        res *= r;
    }

    printf("%lld\n", res);

    return 0;
}