/**
 * @file 1080.cpp
 * @brief 언제까지 더해야 할까?
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int i, sum = 0;
    for (i = 0; sum < n; i++)
    {
        sum += i;
    }
    printf("%d\n", i - 1);

    return 0;
}