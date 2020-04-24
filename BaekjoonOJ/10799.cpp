/**
 * @file 10799.cpp
 * @brief 쇠막대기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. 레이저로 자르는 것과 스택과 상관 관계 파악
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

    stack<int> st;
    int cnt = 0; // 잘라진 쇠막대기 갯수

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            st.push(i);
        }
        else
        {
            if (st.top() == i - 1) // 레이저로 자름 -> 스택 사이즈만큼 막대기 개수 +
            {
                st.pop();
                cnt += st.size();
            }
            else
            {
                st.pop();
                cnt += 1;
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}