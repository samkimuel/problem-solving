/**
 * @file 1027.cpp
 * @brief 년월일 입력 받아 형식 바꿔 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    int y, m, d;
    scanf("%d.%d.%d", &y, &m, &d);
    printf("%02d-%02d-%04d\n", d, m, y);

    return 0;
}