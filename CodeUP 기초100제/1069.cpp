/**
 * @file 1069.cpp
 * @brief 평가 입력받아 다르게 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int main()
{
    char c;
    scanf("%c", &c);

    switch (c)
    {
    case 'A':
        printf("best!!!\n");
        break;
    case 'B':
        printf("good!!\n");
        break;
    case 'C':
        printf("run!\n");
        break;
    case 'D':
        printf("slowly~\n");
        break;
    default:
        printf("what?");
        break;
    }

    return 0;
}