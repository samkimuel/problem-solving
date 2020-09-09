/**
 * @file 108.cpp
 * @brief 빛 섞어 색 만들기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);

    int cnt = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < g; j++)
        {
            for (int k = 0; k < b; k++)
            {
                printf("%d %d %d\n", i, j, k);
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);

    return 0;
}