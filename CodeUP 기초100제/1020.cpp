/**
 * @file 1020.cpp
 * @brief 주민번호 입력받아 형태 바꿔 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    scanf("%d-%d", &a, &b);
    printf("%06d%07d\n", a, b);

    return 0;
}