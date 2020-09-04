/**
 * @file 1068.cpp
 * @brief 정수 1개 입력받아 평가 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    if (n >= 90 && n <= 100)
    {
        printf("A\n");
    }
    else if (n >= 70 && n <= 89)
    {
        printf("B\n");
    }
    else if (n >= 40 && n <= 69)
    {
        printf("C\n");
    }
    else
    {
        printf("D\n");
    }

    return 0;
}