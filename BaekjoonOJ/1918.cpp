/**
 * @file 1918.cpp
 * @brief 후위 표기법(postfix notation)
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. 연산자 우선순위를 위한 함수 만들기 -> 경우의 수 쉽게
 */

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int priority(char ch) // 우선순위 계산
{
    if (ch == '(')
        return 0;
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    string res;
    stack<char> st;
    int len = str.length();
    for (char ch : str)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            res += ch;
        }
        else if (ch == '(')
        {
            st.push('(');
        }
        else if (ch == ')')
        {
            while (!st.empty())
            {
                if (st.top() == '(')
                {
                    st.pop();
                    break;
                }
                res += st.top();
                st.pop();
            }
        }
        else // ch == 연산자
        {
            while (!st.empty() && priority(st.top()) >= priority(ch))
            {
                res += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty()) // 남은 연산자
    {
        res += st.top();
        st.pop();
    }

    cout << res << '\n';

    return 0;
}