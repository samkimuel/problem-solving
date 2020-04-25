/**
 * @file 1935.cpp
 * @brief 후위 표기식2
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. 소수점 출력 형식(범위) 설정
 */

#include <iostream>
#include <string>
#include <stack>
#include <iomanip> // 출력형식

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string str;
    cin >> str;

    int nums[26];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    stack<double> st;
    for (auto ch : str)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            st.push((double)nums[ch - 'A']);
        }
        else
        {
            double num2 = (double)st.top();
            st.pop();
            double num1 = (double)st.top();
            st.pop();

            if (ch == '+')
            {
                st.push(num1 + num2);
            }
            else if (ch == '-')
            {
                st.push(num1 - num2);
            }
            else if (ch == '*')
            {
                st.push(num1 * num2);
            }
            else if (ch == '/')
            {
                st.push(num1 / num2);
            }
        }
    }

    cout << fixed << setprecision(2) << st.top() << '\n';

    // cout.precision(4);
    // cout << 5.123123 << '\n'; // 결과 : 5.123
    // cout.copyfmt(ios(NULL)); // cout 상태 초기화
    // cout << 5.123123; // ==> 5.12312 기본 double 출력 : 소수점 이하 5번째까지

    // fixed 소수점아래 출력 형식 해제
    // cout.unsetf(ios::fixed);
    // cout << st.top();

    return 0;
}