/**
 * @file 17298.cpp
 * @brief 오큰수
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * Need review
 * 1. vector 선언, 초기화 시 사이즈 입력
 */

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v1(n), v2(n); // v1 : 수열 A, v2 : 오큰수
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    st.push(0);
    for (int i = 1; i < n; i++)
    {
        if (st.empty())
        {
            st.push(i);
        }

        while (!st.empty() && (v1[st.top()] < v1[i]))
        {
            v2[st.top()] = v1[i];
            st.pop();
        }

        st.push(i);
    }

    while (!st.empty())
    {
        v2[st.top()] = -1;
        st.pop();
    }

    for (int i = 0; i < n; i++)
    {
        cout << v2[i];
        if (i < n - 1)
        {
            cout << ' ';
        }
    }
    cout << '\n';

    return 0;
}