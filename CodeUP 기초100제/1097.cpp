/**
 * @file 1097.cpp
 * @brief 바둑알 십자 뒤집기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int go[20][20] = {};
    for (int i = 1; i <= 19; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            scanf("%d", &go[i][j]);
        }
    }

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        for (int j = 1; j <= 19; j++)
        {
            if (go[x][j] == 0)
            {
                go[x][j] = 1;
            }
            else
            {
                go[x][j] = 0;
            }
        }
        for (int j = 1; j <= 19; j++)
        {
            if (go[j][y] == 0)
            {
                go[j][y] = 1;
            }
            else
            {
                go[j][y] = 0;
            }
        }
    }

    for (int i = 1; i <= 19; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            printf("%d ", go[i][j]);
        }
        printf("\n");
    }

    return 0;
}