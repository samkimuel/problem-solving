/**
 * @file 17299.cpp
 * @brief 오등큰수
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * Need review
 * 1. 등장횟수를 위한 변수
 * 2. 지역변수로 vector 3개가 n이 너무 커지게 되면(인덱스가 너무 크면) 스택오버플로우로 런타임에러가 발생 => 전역변수로 수정
 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int f[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n), ngf(n); // a : 수열, ngf : 오등큰수
    vector<int> f(1000000);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[a[i]] += 1;
    }

    stack<int> st; // 인덱스
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        if (st.empty())
        {
            st.push(i);
        }

        while (!st.empty() && (f[a[st.top()]] < f[a[i]]))
        {
            ngf[st.top()] = a[i];
            st.pop();
        }

        st.push(i); // 수열 A에서 등장한 횟수가 F(Ai)보다 큰 수 중에서 가장 왼쪽에 있는 수가 없는 경우
    }

    while (!st.empty())
    {
        ngf[st.top()] = -1;
        st.pop();
    }

    for (int i = 0; i < n; i++)
    {
        cout << ngf[i];
        if (i < n - 1)
        {
            cout << ' ';
        }
    }
    cout << '\n';

    return 0;
}