/**
 * @file 1099.cpp
 * @brief 성실한 개미
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int arr[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int i = 1, j = 1;
    while (1)
    {

        if (arr[i][j] == 0)
        {
            arr[i][j] = 9;
            j++;
        }
        else if (arr[i][j] == 1)
        {
            i++;
            j--;
        }
        else
        {
            arr[i][j] = 9;
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}