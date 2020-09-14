/**
 * @file 1093.cpp
 * @brief 이상한 출석 번호 부르기1
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int arr[24] = {0};
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        arr[a]++;
    }

    for (int i = 1; i <= 23; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}