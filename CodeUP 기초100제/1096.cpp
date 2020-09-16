/**
 * @file 1096.cpp
 * @brief 바둑판에 흰 돌 놓기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int go[20][20] = {0};
    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        go[x][y] = 1;
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