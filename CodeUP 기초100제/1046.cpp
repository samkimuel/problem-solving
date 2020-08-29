/**
 * @file 1046.cpp
 * @brief 정수 3개 입력받아 합과 평균 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    long long int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%lld\n%.1f\n", a + b + c, (float)(a + b + c) / 3);

    return 0;
}