/**
 * @file 1098.cpp
 * @brief 설탕과자 뽑기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int w, h;
    scanf("%d %d", &w, &h);
    int arr[101][101] = {};
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int l, d, x, y;
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if (d == 0) // 가로
        {
            for (int j = 0; j < l; j++)
            {
                arr[x][y + j] = 1;
            }
        }
        else
        { // 세로
            for (int j = 0; j < l; j++)
            {
                arr[x + j][y] = 1;
            }
        }
    }

    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <= h; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}