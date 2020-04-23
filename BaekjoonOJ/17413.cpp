/**
 * @file 17413.cpp
 * @brief 단어 뒤집기 2
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. 태그 열고 닫을 때 true/false
 */

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);
    s += '\n';

    stack<char> st;

    bool check = false; // 태그 열고 true, 태그 닫고 false

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<')
        {
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            cout << s[i];
            check = true;
        }
        else if (s[i] == '>')
        {
            cout << s[i];
            check = false;
        }
        else if (check) // 태그 안 일 떄
        {
            cout << s[i];
        }
        else // 태그 밖
        {
            if (s[i] == ' ' || s[i] == '\n') // 태그 밖에서 공백 일 때, 태그 밖 끝에서 역순 출력
            {
                while (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }

                cout << s[i];
            }
            else
            {
                st.push(s[i]);
            }
        }
    }

    return 0;
}