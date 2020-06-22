/**
 * @file 10250c.cpp
 * @brief ACM 호텔
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * C스타일로 풀어서 호수(XX)출력을 더 간단하게 만들수 있었고, 로직 코드도 단순화 시킴
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);

        printf("%d%02d\n", n % h == 0 ? h : n % h, n % h == 0 ? n / h : n / h + 1);
    }

    return 0;
}