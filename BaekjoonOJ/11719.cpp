/**
 * @file 11719.cpp
 * @brief 그대로 출력하기 2
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    while (getline(cin, s))
    {
        cout << s << '\n';
    }

    return 0;
}