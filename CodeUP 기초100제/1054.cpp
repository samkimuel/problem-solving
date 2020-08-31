/**
 * @file 1054.cpp
 * @brief 둘 다 참일 경우만 참 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a && b ? 1 : 0);

    return 0;
}