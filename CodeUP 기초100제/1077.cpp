/**
 * @file 1077.cpp
 * @brief 정수 1개 입력받아 그 수까지 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}