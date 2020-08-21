/**
 * @file 1022.cpp
 * @brief 문장 1개 입력받아 그대로 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    char data[2001];
    fgets(data, 2000, stdin);
    printf("%s", data);

    return 0;
}