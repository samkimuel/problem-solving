/**
 * @file 9093.cpp
 * @brief 단어 뒤집기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. cin.ignore() : cin과 getline 같이 사용할 때. 입력 버퍼 삭제
 */

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        s += '\n';

        stack<char> st;
        for (char c : s)
        {
            if (c == ' ' || c == '\n')
            {
                while (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }
                cout << c;
            }
            else
            {
                st.push(c);
            }
        }
    }

    return 0;
}