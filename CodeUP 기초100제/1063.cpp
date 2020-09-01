/**
 * @file 1063.cpp
 * @brief 두 정수 입력받아 큰 수 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a > b ? a : b);

    return 0;
}