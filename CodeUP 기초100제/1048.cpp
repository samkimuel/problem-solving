/**
 * @file 1048.cpp
 * @brief 한 번에 2의 거듭제곱 배로 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a << b);

    return 0;
}