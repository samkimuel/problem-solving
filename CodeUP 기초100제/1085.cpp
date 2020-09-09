/**
 * @file 1085.cpp
 * @brief 소리 파일 저장용량 계산하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int h, b, c, s;
    scanf("%d %d %d %d", &h, &b, &c, &s);

    printf("%.1lf MB\n", ((double)h * b * c * s) / (8 * 1024 * 1024));

    return 0;
}