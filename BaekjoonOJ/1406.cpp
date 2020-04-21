/**
 * @file 1406.cpp
 * @brief 에디터
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. 스택 2개
 * 2. cin / getline 특징
 */

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    stack<char> s1, s2;

    for (int i = 0; i < str.size(); i++)
    {
        s1.push(str[i]);
    }

    int m;
    cin >> m;
    while (m--)
    {
        char ch;
        cin >> ch;

        if (ch == 'L')
        {
            if (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        else if (ch == 'D')
        {
            if (!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
        else if (ch == 'B')
        {
            if (!s1.empty())
            {
                s1.pop();
            }
        }
        else if (ch == 'P')
        {
            // 공백이랑 문자 1개 어떻게 입력받지..?
            // 문제 : cin 이나 getline()으로 string 입력받고 공백 제거처리는 복잡하다.. - 더 쉬운 방법 없을까?
            // 해결 => cin 특징 : cin 으로 입력받으면 공백과 개행문자 무시
            char in;
            cin >> in;
            s1.push(in);
        }
    }

    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    while (!s2.empty())
    {
        cout << s2.top();
        s2.pop();
    }
    cout << '\n';

    return 0;
}