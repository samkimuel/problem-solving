/**
 * @file 1079.cpp
 * @brief 원하는 문자가 입력될 때까지 반복 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    char c;
    do
    {
        scanf("%c ", &c);
        printf("%c\n", c);
    } while (c != 'q');

    return 0;
}