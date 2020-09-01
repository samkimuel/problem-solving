/**
 * @file 1065.cpp
 * @brief 정수 3개 입력받아 짝수만 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a % 2 == 0)
    {
        printf("%d\n", a);
    }
    if (b % 2 == 0)
    {
        printf("%d\n", b);
    }
    if (c % 2 == 0)
    {
        printf("%d\n", c);
    }

    return 0;
}