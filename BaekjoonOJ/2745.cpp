/**
 * @file 2745.cpp
 * @brief 진법 변환
 * @author Sam Kim (samkim2626@gmail.com)
 * https://www.acmicpc.net/problem/2745
 * 
 * char to int (나는 바보입니다...)
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    int b;
    cin >> n >> b;

    int len = n.length();
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        if (n[i] >= 'A')
        {
            ans = ans * b + (n[i] - 'A' + 10);
        }
        else
        {
            ans = ans * b + (n[i] - '0');
        }
    }

    cout << ans << '\n';

    return 0;
}