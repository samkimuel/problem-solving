/**
 * @file 1067.cpp
 * @brief 정수 1개 입력받아 분석하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 0)
    {
        printf("minus\n");
        if (n % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    else
    {
        printf("plus\n");
        if (n % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}