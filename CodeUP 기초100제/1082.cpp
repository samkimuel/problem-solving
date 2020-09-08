/**
 * @file 1082.cpp
 * @brief 16진수 구구단?
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int x;
    scanf("%X", &x);
    for (int i = 1; i <= 0xF; i++)
    {
        printf("%X*%X=%X\n", x, i, x * i);
    }

    return 0;
}