/**
 * @file 1089.cpp
 * @brief 수 나열하기1
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int a, d, n;
    scanf("%d %d %d", &a, &d, &n);
    printf("%d\n", a + d * (n - 1));

    return 0;
}