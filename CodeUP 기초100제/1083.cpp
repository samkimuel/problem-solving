/**
 * @file 1083.cpp
 * @brief 3 6 9 게임의 왕이 되자!
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            printf("X ");
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}