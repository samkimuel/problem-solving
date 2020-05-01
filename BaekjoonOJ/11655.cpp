/**
 * @file 11655.cpp
 * @brief ROT13
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] / ('a' + 13) == 1 ? s[i] -= 13 : s[i] += 13;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] / ('A' + 13) == 1 ? s[i] -= 13 : s[i] += 13;
        }
    }

    cout << s << '\n';

    return 0;
}