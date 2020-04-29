/**
 * @file 11721.cpp
 * @brief 열 개씩 끊어 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * C 버전
 */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        printf("%c", s[i]);
        if (i % 10 == 9)
            printf("\n");
    }

    return 0;
}