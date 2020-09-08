/**
 * @file 1081.cpp
 * @brief 주사위를 2개 던지면?
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d %d\n", i, j);
        }
    }

    return 0;
}