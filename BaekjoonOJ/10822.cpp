/**
 * @file 10822.cpp
 * @brief 더하기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * c++ string 문자열로는 토큰 만들 수 없어서 c 문자열로 변환 후 strtok 함수 사용
 */

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    char cs[100];
    int sum = 0;
    strcpy(cs, s.c_str());

    char *tok = strtok(cs, ",");
    while (tok != NULL)
    {
        string sNum = string(tok);
        sum += stoi(sNum);

        tok = strtok(NULL, ",");
    }

    cout << sum << '\n';

    return 0;
}