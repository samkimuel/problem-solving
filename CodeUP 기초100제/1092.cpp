/**
 * @file 1092.cpp
 * @brief 함께 문제 푸는 날
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

// 최대공약수
int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
        return gcd(y, x % y);
}

// 최소공배수
int lcm(int x, int y)
{
    return x * y / gcd(x, y);
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int g = gcd(gcd(a, b), c);
    int l = lcm(lcm(a, b), c);
    printf("%d\n", l);

    return 0;
}