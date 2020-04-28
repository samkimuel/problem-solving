/**
 * @file 11718.cpp
 * @brief 그대로 출력하기
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char s[101];
    while (cin.getline(s, 100))
    {
        cout << s << '\n';
    }

    return 0;
}