/**
 * @file 1076.cpp
 * @brief 문자 1개 입력받아 알파벳 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    char c, t = 'a';
    scanf("%c", &c);
    do
    {
        printf("%c ", t);
        t++;
    } while (t < c + 1);

    return 0;
}