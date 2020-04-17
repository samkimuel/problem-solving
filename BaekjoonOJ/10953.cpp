/**
 * @file 10953.cpp
 * @brief A+B - 6
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. 구분자(',' 등)가 존재할 때 - getline()
 * 2. string -> int 형변환 - stoi()
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string a, b;
    while (t--)
    {
        getline(cin, a, ',');
        getline(cin, b);

        cout << stoi(a) + stoi(b) << '\n';
    }

    return 0;
}