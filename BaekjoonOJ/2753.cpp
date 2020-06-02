/**
 * @file 2753.cpp
 * @brief 윤년
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 네이버 부스트캠프 자가진단테스트 중
 * 
 * 1. if - 평년 else - 윤년
 * 2. if - 윤년 else - 평년
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int year;
    cin >> year;

    // 1.
    // if ((year % 4 != 0 || year % 100 == 0) && year % 400 != 0)
    // {
    //     cout << 0 << '\n';
    // }
    // else
    // {
    //     cout << 1 << '\n';
    // }

    // 2.
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }

    return 0;
}