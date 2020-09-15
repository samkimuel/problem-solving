/**
 * @file 1094.cpp
 * @brief 이상한 출석 번호 부르기2
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[10001];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[n - i + 1]);
    }

    return 0;
}