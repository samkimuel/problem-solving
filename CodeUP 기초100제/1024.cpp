/**
 * @file 1024.cpp
 * @brief 단어 1개 입력받아 나누어 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    char s[20];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("\'%c\'\n", s[i]);
    }

    return 0;
}