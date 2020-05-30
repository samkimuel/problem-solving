/**
 * @file 10823.cpp
 * @brief 더하기 2
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int sum = 0;
    string s;
    string num;
    while (getline(cin, s))
    {
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            if (s[i] != ',')
            {
                num += s[i];
            }
            else
            {
                sum += stoi(num);
                num = "";
            }
        }
    }
    sum += stoi(num); // EOF 처리

    cout << sum << '\n';

    return 0;
}