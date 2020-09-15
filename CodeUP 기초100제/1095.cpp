/**
 * @file 1095.cpp
 * @brief 이상한 출석 번호 부르기3
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[10001], min = 24;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d\n", min);

    return 0;
}