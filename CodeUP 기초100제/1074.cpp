/**
 * @file 1074.cpp
 * @brief 정수 1개 입력받아 카운트다운 출력하기1
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n != 0)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}