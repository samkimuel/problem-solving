/**
 * @file 1086.cpp
 * @brief 그림 파일 저장용량 계산하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int w, h, b;
    scanf("%d %d %d", &w, &h, &b);

    printf("%.2lf MB\n", (double)(w * h * b) / 8 / 1024 / 1024);

    return 0;
}