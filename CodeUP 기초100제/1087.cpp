/**
 * @file 1087.cpp
 * @brief 여기까지! 이제 그만~
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0, sum = 0;
    while (sum < n)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);

    return 0;
}