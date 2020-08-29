/**
 * @file 1045.cpp
 * @brief 정수 2개 입력받아 자동 계산하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    long long int a, b;
    scanf("%d %d", &a, &b);
    printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2f\n", a + b, a - b, a * b, a / b, a % b, (float)a / b);

    return 0;
}