/**
 * @file 1072.cpp
 * @brief 정수 입력받아 계속 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    scanf("%d", &n);

reget:
    scanf("%d", &m);
    printf("%d\n", m);

    if (--n != 0)
    {
        goto reget;
    }

    return 0;
}