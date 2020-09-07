/**
 * @file 1073.cpp
 * @brief 0 입력될 때까지 무한 출력하기2
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n) && n != 0)
    {
        printf("%d\n", n);
    }

    return 0;
}