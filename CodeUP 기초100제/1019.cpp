/**
 * @file 1019.cpp
 * @brief 연월일 입력받아 그대로 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    int y, m, d;
    scanf("%d.%d.%d", &y, &m, &d);
    printf("%04d.%02d.%02d\n", y, m, d);

    return 0;
}