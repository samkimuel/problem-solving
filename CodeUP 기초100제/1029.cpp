/**
 * @file 1029.cpp
 * @brief 실수 1개 입력받아 그대로 출력하기2
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    double d;
    scanf("%lf", &d);
    printf("%.11lf\n", d);

    return 0;
}