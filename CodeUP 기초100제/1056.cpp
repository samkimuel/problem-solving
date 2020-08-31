/**
 * @file 1056.cpp
 * @brief 참/거짓이 서로 다를 때에만 참 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", (a && !b) || (!a && b));

    return 0;
}